# Esp32_RingDoorBell_Alexa_Sinric_FritzPhone

Use Esp32 to ring Dect phones of a Fritzbox (Router/DECT-Phone combination) when the 'Ring Video Doorbell Wired' button is pressed (works in cooperation with Ring- and Sinric Pro-Alexa Skills and Alexa Routines).

I bought a 'Ring Video Doorbell Wired". With the provided Alexa skill I could use the Alexa ECHO plus for chime notifications. 
However I have several DECT-phone connected to my Fritzbox (Router/DECT-Phone combination) which could not be used without further actions.
So I developed the following solution.

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
