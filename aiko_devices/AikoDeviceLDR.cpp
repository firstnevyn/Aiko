/*
 * To Do
 * ~~~~~
 * - When LDR value changes ...
 *   - Update display.
 *   - Send communications message.
 */

#ifdef ENABLE_AIKO_DEVICE_LDR
int ldrValue = 0;
#endif

void ldrHandler(void) {
  ldrValue = analogRead(PIN_LDR);
}
