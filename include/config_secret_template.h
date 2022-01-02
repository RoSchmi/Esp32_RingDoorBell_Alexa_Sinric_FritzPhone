#ifndef _CONFIG_SECRET_H
#define _CONFIG_SECRET_H

// Rename config_secret_template.h into config_secret.h to activate the content

// Wifi
#define IOT_CONFIG_WIFI_SSID            "MySSID"
#define IOT_CONFIG_WIFI_PASSWORD        "MyPassword"

// FritzBox
#define FRITZ_IP_ADDRESS "fritz.box"    // IP Address of FritzBox
                                        // Change for your needs
#define FRITZ_USER ""                   // FritzBox User (may be empty)
#define FRITZ_PASSWORD "MySecretName"   // FritzBox Password

// Sinric Pro
#define APP_KEY           "de0bxxxx-1x3x-4x3x-ax2x-5dabxxxxxxxx"      // Should look like "de0bxxxx-1x3x-4x3x-ax2x-5dabxxxxxxxx"
#define APP_SECRET        "5f36xxxx-x3x7-4x3x-xexe-e86724a9xxxx-4c4axxxx-3x3x-x5xe-x9x3-333d65xxxxxx"   // Should look like "5f36xxxx-x3x7-4x3x-xexe-e86724a9xxxx-4c4axxxx-3x3x-x5xe-x9x3-333d65xxxxxx"

#define SWITCH_ID_1       "5dc1564130xxxxxxxxxxxxxx"    // Should look like "5dc1564130xxxxxxxxxxxxxx"
#define SWITCH_ID_2       "5dc1564130xxxxxxxxxxxxxx"    // Should look like "5dc1564130xxxxxxxxxxxxxx"
//#define SWITCH_ID_3     ""                            // Should look like "5dc1564130xxxxxxxxxxxxxx"
//#define SWITCH_ID_4     ""                            // Should look like "5dc1564130xxxxxxxxxxxxxx"    

#endif // _CONFIG_SECRET_H