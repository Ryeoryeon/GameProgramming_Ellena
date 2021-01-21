// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"
// Sets default values

float moveSpeed = 0.3f;

void CameraDirection::setCameraDirection(int newLeftIndex, int newRightIndex, int newUpIndex, int newDownIndex)
{
	leftIndex = newLeftIndex;
	rightIndex = newRightIndex;
	upIndex = newUpIndex;
	downIndex = newDownIndex;
}

ACameraDirector::ACameraDirector()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACameraDirector::SetCameraRight()
{
	if (cameraDirection[currentRoomNumber].rightIndex)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = cameraDirection[currentRoomNumber].rightIndex;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}


void ACameraDirector::SetCameraLeft()
{
	if (cameraDirection[currentRoomNumber].leftIndex)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = cameraDirection[currentRoomNumber].leftIndex;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraUp()
{
	if (cameraDirection[currentRoomNumber].upIndex)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = cameraDirection[currentRoomNumber].upIndex;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraDown()
{
	if (cameraDirection[currentRoomNumber].downIndex)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = cameraDirection[currentRoomNumber].downIndex;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber],moveSpeed);
	}
}

void ACameraDirector::SetCameraSafe()
{
	if (currentRoomNumber == 2) 
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 5;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}
void ACameraDirector::SetCameraDesk()
{
	if (currentRoomNumber == 3)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 6;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}
void ACameraDirector::SetCameraRoomTwo()
{
	if (currentRoomNumber == 2)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 25;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
	
	if (currentRoomNumber == 25)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 10;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
	if (currentRoomNumber == 11)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 25;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
}
void ACameraDirector::SetCameraTM()
{
	if (currentRoomNumber == 4)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 7;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
	if (currentRoomNumber == 3)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 7;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
	/*
	if (currentRoomNumber == 7)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 25;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}*/
}
void ACameraDirector::SetCameraRoomThreeDoor()
{
	if (currentRoomNumber == 4)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 8;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}
void ACameraDirector::SetCameraBookShelf()
{
	if (currentRoomNumber == 4)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 9;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}
void ACameraDirector::SetCameraRoomThree()
{
	if (currentRoomNumber == 8)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 14;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
	if (currentRoomNumber == 12)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 8;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
		return;
	}
}
void ACameraDirector::SetCameraLabDesk()
{
	if (currentRoomNumber == 13)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 17;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}
void ACameraDirector::SetCameraLabFake()
{
	if (currentRoomNumber == 15)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 19;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraFinalDoor()
{
	if (currentRoomNumber == 1)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 20;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraBottle()
{
	if (currentRoomNumber == 10)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 23;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraRoom2Desk()
{
	if (currentRoomNumber == 21)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 22;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraRoom3Safe()
{
	if (currentRoomNumber == 15)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 16;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraFireplace()
{
	if (currentRoomNumber == 1)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 24;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameraDiary()
{
	if (currentRoomNumber == 9)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 26;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

void ACameraDirector::SetCameratoRoom2() {
	if (currentRoomNumber == 2)
	{
		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
		currentRoomNumber = 25;
		OurPlayerController->SetViewTargetWithBlend(Camera[currentRoomNumber], moveSpeed);
	}
}

int32 ACameraDirector::getCurrentRoomNumber()
{
	return currentRoomNumber;
}
// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	currentRoomNumber = 1;

	cameraDirection[1].setCameraDirection(4, 2, 0, 0);	//CameraFinalDoor
	cameraDirection[2].setCameraDirection(1, 3, 0, 0);	//CameraRoom2Door
	cameraDirection[3].setCameraDirection(2, 4, 0, 0);	//CameraDesk
	cameraDirection[4].setCameraDirection(3, 1, 0, 0);	//CameraRoom3Door
	cameraDirection[5].setCameraDirection(0, 0, 0, 2);	//CameraSafe
	cameraDirection[6].setCameraDirection(0, 0, 0, 3);	//CameraDesk
	cameraDirection[7].setCameraDirection(0, 0, 0, 4);	//CameraTM
	cameraDirection[8].setCameraDirection(0, 0, 0, 4);	//CameraRoom3Door
	cameraDirection[9].setCameraDirection(0, 0, 0, 4);	//CameraBookShelf

	cameraDirection[10].setCameraDirection(11, 21, 0, 0);//CameraRoom2-1
	cameraDirection[11].setCameraDirection(21, 10, 0, 0);//CameraRoom2-2

	cameraDirection[12].setCameraDirection(15, 13, 0, 0);//CameraRoom3Wall1
	cameraDirection[13].setCameraDirection(12, 14, 0, 0);//CameraRoom3Wall2
	cameraDirection[14].setCameraDirection(13, 15, 0, 0);//CameraRoom3Wall3
	cameraDirection[15].setCameraDirection(14, 12, 0, 0);//CameraRoom3Wall4
	cameraDirection[16].setCameraDirection(0, 0, 0, 15);
	cameraDirection[17].setCameraDirection(0, 18, 0, 13);
	cameraDirection[18].setCameraDirection(17, 0, 0, 13);
	cameraDirection[19].setCameraDirection(0, 0, 0, 15);
	cameraDirection[20].setCameraDirection(0, 0, 0, 1);

	cameraDirection[21].setCameraDirection(10, 11, 0, 0);	//CameraRoom2-3
	cameraDirection[22].setCameraDirection(0, 0, 0, 21);	//CameraRoom2DeskClose
	cameraDirection[23].setCameraDirection(0, 0, 0, 10);	//CameraBottleClose
	cameraDirection[24].setCameraDirection(0, 2, 0, 1);		//CameraFirePlace

	cameraDirection[25].setCameraDirection(0, 0, 0, 2);		//CameraFirePlace

	cameraDirection[26].setCameraDirection(0, 0, 0, 9);		//CameraFirePlace





	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	OurPlayerController->SetViewTarget(Camera[currentRoomNumber]);
	
}