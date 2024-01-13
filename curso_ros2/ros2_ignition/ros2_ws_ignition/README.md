# ROS2 nivel 2 - Ignition

Este repositorio contiene apuntes y ficheros sobre ROS2 enfocados en Ignition Fortress, RViz, TF (TransForm), y otras herramientas para el desarrollo de robots. Algunos de los conceptos se da por hecho que se conocen ya que se han visto en el repositorio de ros2-comienzo.

## Descargar o consultar los apuntes y documentos relacionados con el repositorio

Se pueden consultar o descargar los apuntes y otros documentos de este repositorio en el siguiente enlace de google drive: [ROS2 Ignition](https://drive.google.com/drive/folders/1UIiLyfWP1A9ip3DoQAtzH64t_sTAl_iH?usp=sharing)

## Contenido

### 1. RViz y TF (TransForm)
- Exploración de las capacidades de RViz y cómo utilizar TF para gestionar las transformaciones en un entorno robótico.
- ¿Qué problema estamos tratando de resolver con TF?

### 2. URDF: Descripción del Robot
- ¿Qué es URDF?
- Creación y visualización de links en el primer URDF.
- Personalización con etiquetas de material para añadir color.
- Conceptos fundamentales sobre Joints.
- Documentación detallada sobre joints y links.

### 3. Configuración y Ejecución
- Ejecutar `robot_state_publisher` y RViz desde la terminal.
- Crear el paquete `my_robot_description` para instalar el URDF.
- Configurar un launch file para ejecutar RViz, `robot_state_publisher`, y el GUI al mismo tiempo.

### 4. Xacro: Haciendo el URDF más Flexible
- Hacer el URDF compatible con Xacro.
- Crear variables con xacro property.
- Implementar funciones con xacro macros.
- Separar archivos Xacro usando la directiva `include`.

### 5. Integración con Ignition Gazebo Fortress
- Instalación de Ignition Gazebo Fortress.
- Adición de inercia y colisión en archivos URDF.
- Spawnear el URDF en Gazebo Fortress.
- Utilización de plugins para controlar el movimiento del robot.

### 6. Sensores en Ignition Fortress
- Exploración del uso de sensores en el entorno Ignition Fortress.
- Observaciones clave sobre la conversión de URDF a SDF.
