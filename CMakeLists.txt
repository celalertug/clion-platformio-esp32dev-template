cmake_minimum_required(VERSION 3.2)
project(clion-platformio-template-esp32)

#include(CMakeListsPrivate.txt)

include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/config")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/bluedroid")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/app_trace")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/app_update")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/bootloader_support")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/bt")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/driver")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/esp32")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/esp_adc_cal")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/ethernet")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/fatfs")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/freertos")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/heap")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/jsmn")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/log")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/mdns")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/mbedtls")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/mbedtls_port")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/newlib")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/nvs_flash")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/openssl")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/spi_flash")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/sdmmc")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/spiffs")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/tcpip_adapter")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/ulp")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/vfs")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/wear_levelling")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/xtensa-debug-module")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/console")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/soc")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/newlib")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/coap")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/wpa_supplicant")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/expat")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/json")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/nghttp")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/tools/sdk/include/lwip")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/cores/esp32")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/variants/esp32")
include_directories("$ENV{HOME}/Desktop/t/clion-platformio-template-esp32/src")
include_directories("$ENV{HOME}/Desktop/t/clion-platformio-template-esp32/include")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/ArduinoOTA/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/BLE/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/EEPROM")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/ESP32/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/ESPmDNS/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/FS/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/HTTPClient/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/Preferences/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/SD/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/SD_MMC/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/SPI/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/SPIFFS/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/SimpleBLE/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/Update/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/WiFi/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/WiFiClientSecure/src")
include_directories("$ENV{HOME}/.platformio/packages/framework-arduinoespressif32/libraries/Wire/src")
include_directories("$ENV{HOME}/.platformio/packages/toolchain-xtensa32/xtensa-esp32-elf/include")
include_directories("$ENV{HOME}/.platformio/packages/toolchain-xtensa32/xtensa-esp32-elf/include/c++/5.2.0")
include_directories("$ENV{HOME}/.platformio/packages/toolchain-xtensa32/xtensa-esp32-elf/include/c++/5.2.0/xtensa-esp32-elf")
include_directories("$ENV{HOME}/.platformio/packages/toolchain-xtensa32/lib/gcc/xtensa-esp32-elf/5.2.0/include-fixed")
include_directories("$ENV{HOME}/.platformio/packages/toolchain-xtensa32/lib/gcc/xtensa-esp32-elf/5.2.0/include")
include_directories("$ENV{HOME}/.platformio/packages/tool-unity")

include_directories(lib/mylib)

add_custom_target(
    PLATFORMIO_BUILD ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_UPLOAD ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target upload
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_CLEAN ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target clean
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_TEST ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion test
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_PROGRAM ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target program
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_UPLOADFS ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion run --target uploadfs
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_UPDATE_ALL ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion update
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    PLATFORMIO_REBUILD_PROJECT_INDEX ALL
    COMMAND ${PLATFORMIO_CMD} -f -c clion init --ide clion
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(${PROJECT_NAME} src/main.cpp src/main.cpp lib/mylib/mylib.cpp lib/mylib/mylib.h)
