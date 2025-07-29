// Configuración para ESP32 T-SIM7000

// I2C (SDA/SCL)
#define I2C_SDA 21
#define I2C_SCL 22

// Botón
#define BUTTON_PIN 35 // Pin de entrada analógica, sin pull-up interno
#define BUTTON_ACTIVE_LOW true
#define BUTTON_ACTIVE_PULLUP false  // No tiene pull-up interno
//#define BUTTON_NEED_PULLUP // Usa esta solo si agregas una resistencia externa

// LED
#define LED_STATE_ON 1
#define LED_PIN 4

// Pin de notificación externa (puede usarse para indicar estado)
#define EXT_NOTIFY_OUT 13

// LoRa (usa RFM95 / SX127x o SX1262, selecciona uno)
#define USE_RF95
//#define USE_SX1262

#define LORA_CS     18
#define LORA_RESET  12
#define LORA_DIO0   32
#define LORA_DIO1   33
#define LORA_DIO2   34


#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// GPS Ublox (TX y RX cruzados)
#define GPS_UBLOX
#define GPS_RX_PIN 26  // Desde GPS al ESP32 (RX del ESP32)
#define GPS_TX_PIN 27  // Desde ESP32 al GPS (TX del ESP32)

// PMU no incluido en esta versión
// #define HAS_AXP192
// #define PMU_IRQ 35
