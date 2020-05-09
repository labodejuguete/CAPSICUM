# CAPSICUM
# Spicy MIDI Framework
 ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/capsicum/capsicum.JPG)
(engish below)

 CAPSICUM es un entorno de implentación del popular protocolo MIDI para la experimentación electrónica. Puede leer (IN), escribir (OUT) y redirigir (THRU) permitiendo tanto el control de dispositivos electrónicos/eléctricos como la creación de interfaces de ejecución musical. Se basa en el microcontrolador ATMEGA328P-PU y a nivel soft y se programa mediante el entorno Arduino haciendo uso de un programador USB a Serial (u otra placa Arduino).
 
 Todas las PCBs son de una sola capa, permitiendo su fabricación casera. Fueron diseñadas con FRITZING
 https://fritzing.org/
 
 CAPSICUM fue desarrollado originalmente para el control electromecánico, lumínico y sonoro de LUDOTECNIA
 http://www.jcrowe.xyz/ludotecnia 
 
CAPSICUM se complementa las siguientes expansiones:
 
# CHIPOTLE (Capsicum annum (ahumado))
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/chipotle/chipotle-pic3.jpg) 
  
CHIPOTLE implementa 6 transistores MOSFET para el control de actuadores (por ejemplo motores y solenoides) y leds (en tira o de alta potencia). Cuenta además con seis potenciómetros contectados a las entradas analógicas y seis interruptores de corte para control manual de las señales que activan los transistores. Cuenta además con una entrada de alimentación en caso se requieran voltajes superiores a 12V (hasta 12 V pueden ser suministrados directamente desde la placa CAPSICUM.

# ROCOTO (Capsicum pubescens)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/rocoto/rocoto.jpg)
 ROCOTO implementa seis relays DPDT para encendido y apagado electromecánico de dispositivos de corriente alterna o continua. Cuenta además con seis pulsadores con retención (con led indicador de estado) conectados a sendas entradas digitales y seis potenciómetros conectados a las entradas analógicas.
# PANKA (Capsicum baccatum)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/panka/panka-pic1.jpg)
 PANKA transforma a CAPSICUM en un “teclado“ MIDI a la manera del popular Stylophone. Cuenta con un interruptor para seleccionar diversas escalas pre-programadas y un pixel led para identificar por color la escala seleccionada. 
 
 Otros integrantes de la familia CAPSICUM:
# PEPERONCINO (Capsicum frutescens)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/peperoncino/peperoncinoA.jpg)
 PEPERONCINO es una shield MIDI (IN-OUT/THRU) para Arduino. La entrada MIDI está aislada ópticamente de acuerdo a la práctica general. Cuenta con un interruptor para seleccionar entre modo Programación y Modo MIDI y una pequeña superficie de prototipado.
# ULUPICA (Capsicum cardenasii)
  ![alt tag](https://github.com/labodejuguete/CAPSICUM/blob/master/ulupica/ulupica-pic0.jpg)
 ULUPICA es una MIDI THRU BOX. Replica la señal MIDI entrante en sus cinco salidas. La versión MKI se alimenta con 9 a 12 V. La versión MKII se alimenta por USB (aún no fabricada ni testeada).
 

 
 
 

