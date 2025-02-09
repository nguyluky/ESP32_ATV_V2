#include "utils.h"

void printPacket(uint8_t *packet, size_t len) {
    Serial.print("unit8array: [");
    for (size_t i = 0; i < len; i++) {
        Serial.printf("0x%02X", packet[i]);
        if (i < len - 1) {
            Serial.print(", ");
        }
    }
    Serial.println("]");

    Serial.print("hex: ");
    for (size_t i = 0; i < len; i++) {
        Serial.printf("%02X", packet[i]);
    }
    Serial.println();

}