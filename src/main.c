// Copyright (c) 2024 Samy Francelet

#include <zephyr/kernel.h>
#include <app_version.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(matter_logic)

int main()
{
    LOG_INF("Starting Matter device\n\tboard: %s\n\tFirmware v%s", 
            CONFIG_BOARD, APP_VERSION_STRING);

    for (;;) {
        LOG_INF("Hello world!");
        k_sleep(K_SECONDS(1));
    }
}