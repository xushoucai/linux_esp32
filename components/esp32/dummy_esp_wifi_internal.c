// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * All the APIs declared here are internal only APIs, it can only be used by 
 * espressif internal modules, such as SSC, LWIP, TCPIP adapter etc, espressif 
 * customers are not recommended to use them.
 *
 * If someone really want to use specified APIs declared in here, please contact
 * espressif AE/developer to make sure you know the limitations or risk of 
 * the API, otherwise you may get unexpected behavior!!!
 *
 */


#include "esp_wifi_internal.h"

/**
  * @brief  get whether the wifi driver is allowed to transmit data or not
  *
  * @param  none
  *
  * @return    true  : upper layer should stop to transmit data to wifi driver
  * @return    false : upper layer can transmit data to wifi driver
  */
bool esp_wifi_internal_tx_is_stop(void)
{

}

/**
  * @brief  free the rx buffer which allocated by wifi driver
  *
  * @param  void* buffer: rx buffer pointer
  *
  * @return    nonoe
  */
//void esp_wifi_internal_free_rx_buffer(void* buffer)
//{
//
//}

/**
  * @brief  transmit the buffer via wifi driver
  *
  * @param  wifi_interface_t wifi_if : wifi interface id
  * @param  void *buffer : the buffer to be tansmit
  * @param  u16_t len : the length of buffer
  *
  * @return
  *    - ERR_OK  : Successfully transmit the buffer to wifi driver
  *    - ERR_MEM : Out of memory
  *    - ERR_IF : WiFi driver error
  *    - ERR_ARG : Invalid argument
  */
int esp_wifi_internal_tx(wifi_interface_t wifi_if, void *buffer, u16_t len)
{

}

/**
  * @brief     The WiFi RX callback function
  *
  *            Each time the WiFi need to forward the packets to high layer, the callback function will be called
  *
  */
//typedef esp_err_t (*wifi_rxcb_t)(void *buffer, uint16_t len, void *eb);

/**
  * @brief     Set the WiFi RX callback
  *
  * @attention 1. Currently we support only one RX callback for each interface
  *
  * @param     wifi_interface_t ifx : interface
  * @param     wifi_rxcb_t fn : WiFi RX callback
  *
  * @return    ESP_OK : succeed
  * @return    others : fail
  */
esp_err_t esp_wifi_internal_reg_rxcb(wifi_interface_t ifx, wifi_rxcb_t fn)
{

}

/**
  * @brief     Notify WIFI driver that the station got ip successfully
  *
  * @param     none
  *
  * @return    ESP_OK : succeed
  * @return    others : fail
  */
esp_err_t esp_wifi_internal_set_sta_ip(void)
{

}
