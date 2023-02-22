
#include "function.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriverObject, PUNICODE_STRING pRegistryPath)
{
    NTSTATUS NtStatus = STATUS_SUCCESS;
    UINT uiIndex = 0;
    PDEVICE_OBJECT pDeviceObject = NULL;
    UNICODE_STRING usDriverName, usDosDeviceName;

    DbgPrint("DriverEntry Called \r\n");

    RtlInitUnicodeString(&usDriverName, L"\\Device\\Example");
    RtlInitUnicodeString(&usDosDeviceName, L"\\DosDevices\\Example");

    NtStatus = IoCreateDevice(pDriverObject, 0,
        &usDriverName,
        FILE_DEVICE_UNKNOWN,
        FILE_DEVICE_SECURE_OPEN,
        FALSE, &pDeviceObject);
}