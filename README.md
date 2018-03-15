Practica Alarma para Puerta

Montenegro Jonathan

Descripción:

Descripción: Alarma para puerta con arduino uno, utilizando un red siwtch y un iman como el mecanismo de lanzamiento para la alarma, se genera una alarma visual con leds de colores. 

Por lo general estos interruptores son normalmente abiertos, pero al acercarles el imán se cierra, entonces con las puertas cerradas se toman como interruptores normalmente cerrados (NC).

Descripción del codigo: El encapsulado con el reed switch se instala en el marco de la abertura de modo que cuando esta última este cerrada, el imán este lo suficientemente cerca del reed switch como para mantener cerrados los contactos. Cuando la puerta (ventana, portón, etc.) se abra, el campo magnético del imán cesará de accionar sobre el reed abriendo sus contactos, que al estar conectados a una zona del panel de alarma, informa existencia de un evento de apertura en esa zona.

Si el iman y el reed switch estan en contacto la alarma permanece dormida, en el momento en el que se separan se dispara la alarma conformada por los leds de modo que encienden y apagan. La alarma vuelve a estar en modo de reposo cuando se unen de nuevo el reed switch y el iman.

Componentes Recomendados: 
-1 Led Rojo
-1 Led Azul 
-1 Reed-switch (Se utilizo un reed switch casero para las pruebas) 
-1 Iman en forma de cilindro 
-4 Resistencias de 330 ohms. 
-6 Cables macho-macho 
-7 Puentes pequeños
-1 Placa Arduino Uno 
-1 Placa Protoboard

Software utilizado:
Libre office Arduino IDE Manjaro linux LICENSE GNU Lesser General Public License
