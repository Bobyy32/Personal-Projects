#pragma once

#include <ntddk.h>
#include <wdf.h>

DRIVER_INITIALIZE DriverEntry;

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPoint);
