#include "BlockComponent.h"

// Sets default values for this component's properties
UBlockComponent::UBlockComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = CanTick();

	// ...
}


// Called when the game starts
void UBlockComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UBlockComponent::CanTick()
{
	return false;
}


// Called every frame
void UBlockComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

