// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/Gameplaystatics.h"
#include "FPSCharacter.h"

// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
	//// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;


	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MsehComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp; //���ò㼶�ṹ  root

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);//���ò㼶�ṹ  attach �� MeshComp

}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();

	PlayEffects();

}

void AFPSObjectiveActor::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

//// Called every frame
//void AFPSObjectiveActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	PlayEffects();

	AFPSCharacter* MyCharacter = Cast<AFPSCharacter>(OtherActor);
	if (MyCharacter)
	{
		MyCharacter->bIsCarryingObjective = true;

		this->Destroy();
	}
}

