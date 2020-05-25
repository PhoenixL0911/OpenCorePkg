#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>

/*
  clang -g \
  -fsanitize=undefined,address \
  -fshort-wchar \
  -D NO_MSABI_VA_FUNCS \
  -I../../User/Include \
  -I../../UDK/MdePkg/Include \
  -I../../UDK/MdePkg/Include/Library \
  -I../../UDK/MdePkg/Include/X64 \
  -include ../../User/Include/Pcd.h \
  -include ../../User/Include/EfiVar.h \
  -include BootServices.h \
  main.c \
  BootServices.c \
  ../../User/Library/BaseMemoryLib.c \
  ../../User/Library/Pcd.c \
  ../../User/Library/EfiVar.c \
  ../../User/Library/DebugBreak.c \
  ../../User/Library/Math.c \
  ../../UDK/MdePkg/Library/UefiLib/UefiLibPrint.c \
  ../../UDK/MdePkg/Library/BaseLib/CpuDeadLoop.c \
  ../../UDK/MdePkg/Library/BaseDebugPrintErrorLevelLib/BaseDebugPrintErrorLevelLib.c \
  ../../UDK/MdePkg/Library/UefiDebugLibConOut/DebugLib.c \
  ../../UDK/MdePkg/Library/UefiDebugLibConOut/DebugLibConstructor.c \
  ../../UDK/MdePkg/Library/BasePrintLib/PrintLib.c \
  ../../UDK/MdePkg/Library/BasePrintLib/PrintLibInternal.c \
  ../../UDK/MdePkg/Library/BaseLib/SafeString.c \
  ../../UDK/MdePkg/Library/BaseLib/String.c \
  ../../UDK/MdePkg/Library/BaseLib/SwapBytes16.c \
  ../../UDK/MdePkg/Library/BaseLib/SwapBytes32.c \
  -o HelloWorld
*/
EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE       ImageHandle,
  IN EFI_SYSTEM_TABLE *SystemTable
  )
{
  Print (L"Hello world\n");
  return EFI_SUCCESS;
}

int main(int argc, char **argv) {
  UefiMain (gImageHandle, gST);
  return 0;
}