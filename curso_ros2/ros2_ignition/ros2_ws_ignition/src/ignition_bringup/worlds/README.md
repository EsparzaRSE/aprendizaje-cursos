# README

El archivo my_robot_arm_world.sdf define un mundo de simulación para un robot con un brazo. El archivo incluye varios plugins que permiten controlar el robot utilizando las teclas del teclado.

## Control del Robot

El robot se puede controlar utilizando las siguientes teclas:

- Flecha arriba (`16777235`): Mueve el robot hacia adelante a una velocidad lineal de 0.5 m/s.
- Flecha abajo (`16777237`): Mueve el robot hacia atrás a una velocidad lineal de -0.5 m/s.
- Flecha izquierda (`16777234`): Hace que el robot gire a la izquierda a una velocidad angular de 0.5 rad/s.
- Flecha derecha (`16777236`): Hace que el robot gire a la derecha a una velocidad angular de -0.5 rad/s.
- Tecla '0' del teclado numérico (`48`): Detiene el movimiento del robot, estableciendo su velocidad lineal y angular a 0.

## Control del Brazo del Robot

El brazo del robot se puede controlar utilizando la siguiente tecla:

- Intro del teclado numérico (`16777221`): Mueve ambas articulaciones del brazo robótico a la posición 0.0.

## Ejecutar en la terminal

Para cargar directamente los plugins al iniciar, se recomienda utilizar el siguiente comando (adaptando los path de los archivos a cada caso) para incluir el archivo de configuración de la GUI de Ignition que se encuentra en la carpeta gui.

ign gazebo --gui-config /home/esparza/ROS2_nivel2/ros2_ws_lvl2/src/my_robot_bringup/gui/my_robot_arm_world.config my_robot_arm_world.sdf
