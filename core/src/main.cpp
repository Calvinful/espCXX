#include "main.c"


#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE

#include "esp_log.h"
#define LOG_TAG "MAIN"



extern "C" void app_main(void){
    while(true){
        ESP_LOGI(LOG_TAG, "Hello");
         vTaskDelay(1000);
    } 
}
