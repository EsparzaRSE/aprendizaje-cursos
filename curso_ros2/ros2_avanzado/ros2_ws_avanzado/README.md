# ROS2 - Avanzado

Este repositorio contiene apuntes y ejemplos sobre temas avanzados en ROS2. Desde el uso de acciones hasta el manejo de Lifecycle Nodes y la introducción a ROS2 Components.

## Descargar o consultar los apuntes y documentos relacionados con el repositorio

Se pueden consultar o descargar los apuntes y otros documentos de este repositorio en el siguiente enlace de google drive: [ROS2 Acanzado](https://drive.google.com/drive/folders/1oFv1uN-om-vTtMeyEfnfmNG7M_SL6gj9?usp=sharing)

## Contenido

### Acciones en ROS2
- Por qué y cuándo usar ROS2 actions
- Cómo funcionan las actions en ROS2
- Creando un “Action Definition”
- Action server en C++
- Uso de rclcpp::Rate
- Action client en C++
- Más sobre SendGoalOptions
- Aceptar o rechazar “goals”
- Goal State Machine: Explicación
- Goal status explicado
- Incluyendo feedback
- Cancelar un goal
- Introspección de acciones con ros2 action (línea de comandos)
- ros2 topics y services ocultos
- Goal policy: Múltiples goals en paralelo
- Goal policy: Rechazar nuevos goals si hay alguno activo
- Explicación detallada de por qué es necesario usar un mutex
- Goal policy: Priorizar el nuevo goal si ya hay uno activo
- Goal policy: Goal queues

## Lifecycle Nodes
- Lifecycle (Managed) Nodes: Qué son y cuándo usarlos
- Transición entre los estados del Lifecycle Node usando la terminal
- Procesando errores en los lifecycle nodes
- Callbacks de los lifecycle nodes

## Executors
- Comprender cómo funcionan los callback y spin
- SingleThreaded Executor
- MultiThreaded Executor y Callback Groups
- ¿Qué grupo de Executor/Callback deberías utilizar?
- Ejecutar varios nodos en un solo ejecutable
    
## ROS2 Components
- ROS2 Components: Introducción
- Composición manual con C++
- Creación de ROS2 components (plugins): Pasos a seguir
- Cargar un componente en tiempo de ejecución con el comando ros2 component
- Cargar componentes desde un launch file