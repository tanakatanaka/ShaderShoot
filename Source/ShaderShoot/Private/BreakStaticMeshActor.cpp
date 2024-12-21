// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakStaticMeshActor.h"

ABreakStaticMeshActor::ABreakStaticMeshActor()
{

}

bool  ABreakStaticMeshActor::IsBroken()
{
	if (Health <= 0)
	{
		return true;
	}

	return false;
}


void ABreakStaticMeshActor::DamagedAction()
{
	Health = Health - 1;


}