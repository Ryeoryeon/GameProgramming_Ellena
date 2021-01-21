#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"
class CameraDirection
{
public:
	int rightIndex;
	int leftIndex;
	int upIndex;
	int downIndex;

public:
	void setCameraDirection(int leftIndex, int rightIndex, int upIndex, int downIndex);
};

UCLASS(Blueprinttype)
class PROJECTELLENA_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		AActor* Camera[100];

	UPROPERTY(EditAnywhere)
		int32 currentRoomNumber;
	bool bRight;
	bool bLeft;
	bool bUp;
	bool bDown;
	CameraDirection cameraDirection[100];
public:
	// Sets default values for this pawn's properties
	ACameraDirector();
	UFUNCTION(BlueprintCallable)
		void SetCameraRight();
	UFUNCTION(BlueprintCallable)
		void SetCameraLeft();
	UFUNCTION(BlueprintCallable)
		void SetCameraUp();
	UFUNCTION(BlueprintCallable)
		void SetCameraDown();
	UFUNCTION(BlueprintCallable)
		void SetCameraSafe();
	UFUNCTION(BlueprintCallable)
		void SetCameraDesk();
	UFUNCTION(BlueprintCallable)
		void SetCameraRoomTwo();
	UFUNCTION(BlueprintCallable)
		void SetCameraTM();
	UFUNCTION(BlueprintCallable)
		void SetCameraRoomThreeDoor();
	UFUNCTION(BlueprintCallable)
		void SetCameraBookShelf();
	UFUNCTION(BlueprintCallable)
		void SetCameraRoomThree();
	UFUNCTION(BlueprintCallable)
		void SetCameraLabDesk();
	UFUNCTION(BlueprintCallable)
		void SetCameraLabFake();
	UFUNCTION(BlueprintCallable)
		void SetCameraFinalDoor();
	UFUNCTION(BlueprintCallable)
		void SetCameraBottle();
	UFUNCTION(BlueprintCallable)
		void SetCameraRoom2Desk();
	UFUNCTION(BlueprintCallable)
		void SetCameraRoom3Safe();
	UFUNCTION(BlueprintCallable)
		void SetCameraFireplace();
	UFUNCTION(BlueprintCallable)
		void SetCameraDiary();
	UFUNCTION(BlueprintCallable)
		void SetCameratoRoom2();
	UFUNCTION(BlueprintCallable)
		int32 getCurrentRoomNumber();
	virtual void BeginPlay() override;
};
