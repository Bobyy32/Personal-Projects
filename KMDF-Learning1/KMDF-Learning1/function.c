#pragma warning (disable : 4100)

#include "function.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPoint) {
	pDriverObject->DriverUnload = UnloadDriver;
	return STATUS_SUCCESS;
}

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject) {
	return STATUS_SUCCESS;
}
