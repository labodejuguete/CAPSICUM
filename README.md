# CAPSICUM
# Spicy MIDI Framework
 ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/capsicum/capsicum.JPG)
 
(engish below)

 CAPSICUM es un entorno de implentación del popular protocolo MIDI para la experimentación electrónica. Puede leer (IN), escribir (OUT) o redirigir (THRU) mensajes, permitiendo tanto el control de dispositivos electrónicos/eléctricos como la creación de interfaces de ejecución musical. Se basa en el microcontrolador ATMEGA328P-PU y a nivel soft y se programa mediante el entorno Arduino haciendo uso de un programador USB a Serial (u otra placa Arduino).
 
CAPSICUM se complementa las siguientes expansiones:
 
# CHIPOTLE (Capsicum annum (ahumado))
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/chipotle/chipotle-pic3.jpg) 
  
CHIPOTLE implementa 6 transistores MOSFET para el control de actuadores (por ejemplo motores y solenoides) y leds (en tira o de alta potencia). Cuenta además con seis potenciómetros contectados a las entradas analógicas y seis interruptores de corte para control manual de las señales que activan los transistores. Cuenta además con una entrada de alimentación propia en caso se requieran voltajes superiores a 12V (hasta 12 V pueden ser suministrados directamente desde la placa CAPSICUM).

# ROCOTO (Capsicum pubescens)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/rocoto/rocoto.jpg)
 ROCOTO implementa seis relays DPDT para encendido y apagado electromecánico de dispositivos de corriente alterna o continua. Cuenta además con seis pulsadores con retención (con led indicador de estado) conectados a sendas entradas digitales, seis interruptores (cambian el modo del  relay de Normal Abierto a Normal Cerrado) y seis potenciómetros conectados a las entradas analógicas.
# PANKA (Capsicum baccatum)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/panka/panka-pic1.jpg)
 PANKA transforma a CAPSICUM en un “teclado“ MIDI a la manera del popular Stylophone. Cuenta con un interruptor para seleccionar diversas escalas pre-programadas y un pixel led para identificar por color la escala seleccionada. 
 
 Otros integrantes de la familia CAPSICUM:
# PEPERONCINO (Capsicum frutescens)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/peperoncino/peperoncinoA.jpg)
 PEPERONCINO es una shield MIDI (IN-OUT/THRU) para Arduino. La entrada MIDI está aislada ópticamente de acuerdo a la práctica general. Cuenta con un interruptor para seleccionar entre modo Programación y Modo MIDI y una pequeña superficie de prototipado.
# ULUPICA (Capsicum cardenasii)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/ulupica/ulupica-pic0.jpg)
 ULUPICA es una MIDI THRU BOX. Replica la señal MIDI entrante en sus cinco salidas.
 
 INFORMACION ADICIONAL
 
 Los ejemplos para Arduino se basan en la biblioteca MIDI de FortySevenEffects (instalar desde el Library Manager en la IDE de Arduino).
 
 https://github.com/FortySevenEffects/arduino_midi_library
 
 Todas las PCBs son de una sola capa, permitiendo su fabricación casera. Fueron diseñadas en
 FRITZING
 
 https://fritzing.org/
 
 CAPSICUM fue desarrollado originalmente para el control electromecánico, lumínico y sonoro de LUDOTECNIA
 
 http://www.jcrowe.xyz/ludotecnia 
 
 # ENGLISH
 
 CAPSICUM is a hardware environment for the popular MIDI protocol for electronic experimentation. It can read (IN), write (OUT) or redirect (THRU) messages, allowing both control of electronic / electrical devices and the creation of musical performance interfaces. It is based on the ATMEGA328P-PU microcontroller and at a soft level and is programmed through the Arduino environment using a USB to Serial programmer (or another Arduino board).

CAPSICUM complements with the following expansions:

CHIPOTLE (Capsicum annum (smoked))

CHIPOTLE implements 6 MOSFET transistors for the control of actuators (for example motors and solenoids) and LEDs (strips or high power). It also has six potentiometers connected to the analog inputs and six  switches for manual control of the signals that activate the transistors. It also has its own power input in case voltages above 12V are required (up to 12V can be supplied directly from the CAPSICUM board below).

ROCOTO (Capsicum pubescens)
ROCOTO implements six DPDT relays for electromechanical on and off of AC or DC devices. It also has six pushbuttons (with status led indicator) connected to digital inputs, six switches (change the relay mode from Normally Open to Normally Closed) and six potentiometers connected to the analog inputs.

PANKA (Capsicum baccatum)
PANKA transforms CAPSICUM into a MIDI “keyboard” in the manner of the popular Stylophone. It has a switch to select various pre-programmed scales and a pixel led  to identify the selected scale by color.

Other members of the CAPSICUM family:

PEPERONCINO (Capsicum frutescens)
PEPERONCINO is a MIDI shield (IN-OUT / THRU) for Arduino. The MIDI input is optically isolated according to general practice. It has a switch to select between Programming mode and MIDI Mode and a small prototyping surface.

ULUPICA (Capsicum cardenasii)
ULUPICA is a MIDI THRU BOX. It replicates the incoming MIDI signal on its five outputs.

ADDITIONAL INFORMATION

The examples for Arduino are based on the FortySevenEffects MIDI library (install from Library Manager on Arduino IDE):

https://github.com/FortySevenEffects/arduino_midi_library

All PCBs are single layer, allowing for DIY manufacturing. They were designed in FRITZING:

https://fritzing.org/

CAPSICUM was originally developed for the electromechanical, light and sound control of LUDOTECNIA:

http://www.jcrowe.xyz/ludotecnia

 
 

