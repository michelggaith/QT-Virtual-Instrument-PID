# QT-Virtual-Instrument-PID
This is the UI of the PID controller  developed in the Bluepill controller.
Interfaz de usuario diseñada para el control de temperatura y establecimiento del set-point
*Consideraciones:
1. Hay un "Parche" para filtrar los datos, ya que como la transmision de datos a veces se desincroniza la lectura es erronea:
Solucion 1: Utilizar "Expresiones estandar", a fin de tener mayor fidelidad, estableciendo una cabecera y un final; 
Ej: \n%d,%d\n. Esto se busca como regular expresion y solventamos el parche.
2. Permitir que se pueda leer el SETPOINT como dato recibido, ya que si cierra el programa no podemos ver el setpoint previo
3. Dinamic line permite el desplazamiento de datos, no esta implementado pero se realiza con el scroll.