#pragma once

#include <ntddk.h>

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPoint);

NTSTATUS UnloadDriver(PDRIVER_OBJECT pDriverObject);