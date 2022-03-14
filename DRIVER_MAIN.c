#pragma warning (disable : 4100)
#include "DRIVER_MAIN.h"
#include "logger.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
	pDriverObject->DriverUnload = UnloadDriver;
	Logger("yoo");
	return STATUS_SUCCESS;
	
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject)
{
	Logger("Unloaded_Successfully !");
	return STATUS_SUCCESS;
}