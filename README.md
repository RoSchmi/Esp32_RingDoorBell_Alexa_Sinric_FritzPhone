# Esp32_RingDoorBell_Alexa_Sinric_FritzPhone

Use Esp32 to ring Dect phones of a Fritzbox (Router/DECT-Phone combination) when the 'Ring Video Doorbell Wired' button is pressed (works in cooperation with Ring- and Sinric Pro-Alexa Skills and Alexa Routines).

I bought a 'Ring Video Doorbell Wired". With the provided Alexa skill I could use the Alexa ECHO plus for chime notifications. 
But as I am very often not sitting in the livingroom and the smartphone could be set silent I wondered if I could utilize the several DECT-phones connected to my Fritzbox (Router/DECT-Phone combination) which are located in several rooms. 

As the DECT-phones could not be used by preconfigured means I developed the solution below.

Before you begin to start ... consider to merely use the much easier fallback solution shown on the picture:

![Gallery](https://github.com/RoSchmi/Esp32_RingDoorBell_Alexa_Sinric_FritzPhone/blob/master/pictures/Fallback.png)

The 'Ring Video Doorbell Wired' is a doorbell consisting of ring-button, video camera with motion detector, 
microphone and speaker and a WiFi module to transfere videos to a cloud server of the producer. 
There are Apps for iOS and Android phones which connect to the cloud server and produce a 'ring-sound' when the button is pressed, can show a video taken from the doorbell camera and provide a talk-back functionality to talk with the visitor at the door remotely.

https://ring.com/products/video-doorbell-wired

The Ring Video Doorbell is supported by an Alexa skill which means that an action in an Alexa-enabled device like an ECHO (usually chime notification) can be started when the doorbell is pressed.

https://support.ring.com/hc/en-us/articles/360031246432-Using-Alexa-to-control-your-Ring-Doorbell-or-Security-Camera-

Besides the chime notification an Alexa routine can be started.

This is where Sinric Pro steps into action.

Sinric Pro is an internet based ecosystem mainly consisting of a of an internet portal, a cloud service, mobile Apps and SDKs to run connected applications 
on different microcontrollers and mini computers (like Esp32, Arduino, Raspberry Pi) Smart home systems like Alexa or Google Home can be integrated.

Sinric Pro is supported by an Alexa skill too. So Sinric Pro actions like setting a Switch in the system to the 'On'-state can be induced through an Alexa routine.

https://help.sinric.pro/pages/tutorials/switch.html

Setting the Sinric Pro switch to 'On' (switch is programmed to reset automatically after 5 seconds to 'Off') induces an action in the Esp32 application provided in this repository.

The induced action of the Esp32 App is ringing a Fritzbox DECT-Phone for some seconds through the Fritzbox REST Api.

### Getting hands on:
In the Fritzbox Web UI in 'System' -> FRITZ!Box-Benutzer' create a user and give rights to 'FRITZ!Box Einstellungen'.

In tab 'Anmeldung im Heimnetz' select 'Anmeldung mit FRITZ!Box-Benutznamen und Kennwort'
Note the user name and the password, they must be entered in the App 'Esp32_RingDoorBell_Alexa_Sinric_FritzPhone'

Create a Sinric Pro Account and create a 'Switch' device with e.g. the following settings:

Name: FritzPhoneRing

Timer: Auto Aus (7sec)

Note the Device_ID, the APP_Key and the App_Secret, they must be entered in the App 'Esp32_RingDoorBell_Alexa_Sinric_FritzPhone'

Open the application 'Esp32_RingDoorBell_Alexa_Sinric_FritzPhone' in PlatformIO, apply the needed settings and passwords in the files include/config_secret.h (use config_secret_template.h as a template) and in include/config.h. Build the application and upload it to the Esp32 board. In the serial monitor you should see if the application runs properly.

In the Sinric Pro Portal select 'Dashboard' on the left menue bar and switch the device (e.g.) FritzPhoneRing to 'On'.
When everthing worked fine, the selected Dect-Phones should ring for a short time.
 
Download the Sinric Pro mobile App from App Store or Google Play and test if everything works from the smartphone App as well.

In the Alexa App on your smartphone on the menue bar select the right icon (three lines), then select 'Skills und Spiele'. Search for 'Sinric Pro' and add the Sinric Pro skill following the given advices.

When everthing worked fine, you should now have a new switch (socket) device in the Alexa App. Switch it to 'On' in the Alexa App to seeif the Dect-phone ring.

Now we come to the 'Ring Video Doorbell' part. To continue, the doorbell should be installed and setted up properly and should work properly with the 'Ring' smartphone App.

Now in the Alexa App on your smartphone you should add the 'Ring Video Doorbell' Alexa skill and create an Alexa routine. 
In this routine you can add an action: set (e.g.) 'FritzPhoneRing' to 'On'

Now hopefully the DECT-phones should ring when you press the doorbell.

I hope that I didn't forget any important steps, if I did, please let me know. 

If you like even more complex examples, please have a look on this application where the doorbell function is combined with switching and monitoring of a Fritz!Dect 200
switchable power socket.

https://github.com/RoSchmi/Esp32Repos/tree/master/Proj/Esp32_Sinric_Ring_DoorBell_Alexa_Fritzbox_MyHome

