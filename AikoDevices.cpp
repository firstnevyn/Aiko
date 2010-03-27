#include "WProgram.h"

#include <AikoDevices.h>
#include <AikoSExpression.h>

namespace Aiko {
  namespace Device {
    SExpression parameter;                 // Temporary: Needed by commands

#include "aiko_devices/AikoDeviceBlink.cpp"
#include "aiko_devices/AikoDeviceClock.cpp"  // Not really a device
#include "aiko_devices/AikoDeviceNode.cpp"   // Not really a device
  }
}
