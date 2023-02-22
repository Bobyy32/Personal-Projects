#pragma once

#include <ntddk.h>
#include <wdf.h>


//Driver's Main:
//Drivers also has a Main function like every other programs, but its slightly different i would say.Driver's Main Function is called "DriverEntry", this function will be basically your entry point of your driver.

DRIVER_INITIALIZE DriverEntry;

NTSTATUS DriverEntry(_In_ PDRIVER_OBJECT  DriverObject, _In_ PUNICODE_STRING RegistryPath);