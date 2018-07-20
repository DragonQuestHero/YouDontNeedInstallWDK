#include "ntddk.h"
#undef _HAS_EXCEPTIONS
#define _HAS_EXCEPTIONS 0
#include <string>
#include <vector>


void DriverUnload(PDRIVER_OBJECT drive_object)
{
	DbgPrint("Unload Over!\n");
}

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT drive_object, PUNICODE_STRING path)
{
	drive_object->DriverUnload = DriverUnload;

	std::string *str = new std::string("1");
	std::vector<int> temp_vecotr;
	temp_vecotr.push_back(2);
	int temp = std::stoi(*str) + temp_vecotr.front();
	DbgPrint("%s\n", std::to_string(temp));
	DbgPrint("SUCCESS\n");


	return STATUS_SUCCESS;
}