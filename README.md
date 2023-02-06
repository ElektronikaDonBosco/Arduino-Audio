INTRODUCCIÓN

El Arduino Audio Meter es un pedal de guitarra programable que funciona con la placa Arduino UNO. Es capaz de leer la señal de audio entrante y crear efectos en las cuatro matrices LED de 8x8. Este proyecto es de código abierto y está dirigido a hackers, músicos y programadores que quieran aprender sobre el procesamiento digital de señales (DSP), los LED, los efectos de guitarra y experimentar sin tener un conocimiento profundo en electrónica o programación.

El Arduino Audio Meter es un proyecto enfocado en brindar una experiencia práctica y divertida para aquellos interesados en aprender sobre la tecnología detrás de los efectos de guitarra. Es un proyecto ideal para aquellos que desean expandir sus conocimientos en programación y electrónica, ya que permite trabajar con el código fuente y modificarlo según sus necesidades.

El pedal está compuesto por una placa Arduino UNO, cuatro matrices LED de 8x8 y un circuito electrónico que permite leer la señal de audio entrante y enviar información a las matrices LED. La programación se realiza utilizando el lenguaje de programación de Arduino, lo que lo hace accesible y fácil de aprender para aquellos con conocimientos básicos en programación.

Además, el proyecto cuenta con una amplia comunidad de usuarios que comparten sus experiencias y modificaciones, lo que permite aprender de otros y expandir aún más los conocimientos adquiridos.

En resumen, el Arduino Audio Meter es un proyecto ideal para aquellos interesados en aprender sobre tecnología y experimentar con ella de una manera práctica y divertida. Ofrece la oportunidad de aprender sobre DSP, LED, efectos de guitarra y programación, todo en un solo proyecto.







![image](https://user-images.githubusercontent.com/124241175/216924077-e61717c6-023b-4ac7-9460-2fe5a780fa81.png)











CÓMO FUNCIONA


El circuito está diseñado para no alterar ni modificar la señal de audio original. El ADC (conversor analógico-digital) de Arduino leerá la señal de la guitarra para crear la animación en la pantalla LED sin agregar ruido ni cambios en la señal 
original. El circuito consta de tres partes importantes: la etapa de entrada, las matrices LED y la fuente de alimentación. Estos componentes trabajan juntos para lograr la visualización de la señal de audio sin afectar su calidad original.


PARTES



Etapa de entrada analógica: La señal de audio débil se amplifica y filtra para prepararla para el ADC (convertidor analógico a digital) de Arduino UNO. Se utiliza un amplificador operacional rail-to-rail (MCP6002) para amplificar la señal (2 a 30 veces dependiendo del potenciómetro de ganancia), de modo que se pueda utilizar cualquier señal de audio.

Matrices LED de 8x8 y controladores: Se utilizan cuatro matrices "ánodo común" para crear una pantalla de 16x16. Se utilizan cuatro chips MAX7219 para controlar las matrices. La comunicación entre Arduino UNO y los LED se realiza mediante tres líneas DIN (datos de entrada), CLK (reloj) y Load. La biblioteca estándar de Arduino para LED (LedControl.h) se utiliza en la mayoría de los ejemplos.

Alimentación: Al usar cuatro matrices LED de 8x8, se obtiene un total de 4x8x8=256 LED, por lo que la corriente puede aumentar hasta 500 mA (Vin=9 a 12 V). Por eso se utiliza un VXO7805-1000 (capaz de 1A como corriente máxima de salida). También se podría usar un 7805 más estándar, pero se calienta.

En resumen, la etapa de entrada analógica del Arduino Audio Meter amplifica y filtra la señal de audio para prepararla para el ADC de Arduino UNO. Luego, se utilizan matrices LED de 8x8 y controladores para crear una pantalla de 16x16, y se comunican con Arduino UNO a través de tres líneas. Finalmente, la alimentación se proporciona mediante un VXO7805-1000 para asegurar una corriente suficiente para los 256 LED.









COMO PROGRAMAR

Para programar el proyecto de la manera más sencilla posible, utilizamos el IDE de Arduino estándar. Todos los efectos están programados en el lenguaje de programación C, que es un lenguaje de programación de bajo nivel ampliamente utilizado en la industria. Todas las herramientas y programas que utilizamos son gratuitos y de código abierto, lo que significa que están disponibles para cualquier persona que quiera utilizarlos sin tener que pagar ninguna tarifa. Para controlar las matrices LED de 8x8, utilizamos la biblioteca LedControl, que es una biblioteca de software que facilita el control de matrices LED. Es importante destacar que se requiere conocimiento básico de C para comprender los códigos y poder utilizar adecuadamente el proyecto. Por lo tanto, se recomienda revisar la guía "Cómo comenzar a programar el medidor de audio Arduino" para obtener toda la información necesaria y poder programar el proyecto de manera efectiva.

