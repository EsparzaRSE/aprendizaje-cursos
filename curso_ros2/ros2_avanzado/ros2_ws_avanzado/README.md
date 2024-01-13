# ROS2 - Avanzado

Este repositorio contiene apuntes y ejemplos sobre temas avanzados en ROS2. Desde el uso de acciones hasta el manejo de Lifecycle Nodes y la introducción a ROS2 Components.

## Acciones en ROS2

1. **Por qué y cuándo usar ROS2 actions**
   - Razones para utilizar acciones en ROS2.
   - Consideraciones sobre cuándo utilizar acciones en lugar de otros mecanismos.

2. **Cómo funcionan las actions en ROS2**
   - Una explicación detallada del funcionamiento interno de las acciones en ROS2.

3. **Creando un “Action Definition”**
   - Pasos y ejemplos para crear una definición de acción personalizada.

4. **Action server en C++**
   - Implementación de un action server en C++.

5. **Uso de rclcpp::Rate**
   - Guía sobre el uso eficiente de rclcpp::Rate en contextos de acciones.

6. **Action client en C++**
   - Desarrollo de un action client en C++.

7. **Más sobre SendGoalOptions**
   - Exploración de opciones adicionales al enviar goals.

8. **Aceptar o rechazar “goals”**
   - Estrategias para aceptar o rechazar goals según la lógica de la aplicación.

9. **Goal State Machine: Explicación**
   - Desglose detallado de la máquina de estados de los goals.

10. **Goal status explicado**
    - Interpretación y manejo de los estados de goals en ROS2.

11. **Incluyendo feedback**
    - Integración de feedback en el desarrollo de acciones.

12. **Cancelar un goal**
    - Métodos para cancelar goals en ejecución.

13. **Introspección de acciones con ros2 action (línea de comandos)**
    - Uso de la línea de comandos para inspeccionar y depurar acciones.

14. **ros2 topics y services ocultos**
    - Exploración de topics y services no evidentes a primera vista.

15. **Goal policy: Múltiples goals en paralelo**
    - Implementación de políticas de goals para manejar múltiples goals simultáneos.

16. **Goal policy: Rechazar nuevos goals si hay alguno activo**
    - Estrategias para manejar la llegada de nuevos goals cuando uno está activo.

17. **Explicación detallada de por qué es necesario usar un mutex**
    - Razonamiento y ejemplos sobre la necesidad de utilizar mutex en ciertos contextos.

18. **Goal policy: Priorizar el nuevo goal si ya hay uno activo**
    - Implementación de políticas de goals para priorizar goals recién llegados.

19. **Goal policy: Goal queues**
    - Uso de colas de goals para gestionar la ejecución en un orden específico.

## Lifecycle Nodes

20. **Lifecycle (Managed) Nodes: Qué son y cuándo usarlos**
    - Introducción a Lifecycle Nodes y sus aplicaciones prácticas.

21. **Transición entre los estados del Lifecycle Node usando la terminal**
    - Ejemplos de transiciones de estados de Lifecycle Node mediante comandos de terminal.

22. **Procesando errores en los lifecycle nodes**
    - Estrategias para manejar errores en el ciclo de vida de los nodos.

23. **Callbacks de los lifecycle nodes**
    - Detalles sobre los callbacks asociados a los estados de Lifecycle Node.

## Executors

24. **Comprender cómo funcionan los callback y spin**
    - Explicación de cómo funcionan los callbacks y el mecanismo de spin en ROS2.

25. **SingleThreaded Executor**
    - Uso y beneficios de SingleThreaded Executor en contextos específicos.

26. **MultiThreaded Executor y Callback Groups**
    - Implementación de MultiThreaded Executor y uso de Callback Groups.

27. **¿Qué grupo de Executor/Callback deberías utilizar?**
    - Consideraciones para elegir el grupo de Executor/Callback adecuado.

28. **Ejecutar varios nodos en un solo ejecutable**
    - Técnicas para ejecutar múltiples nodos en un solo ejecutable.

## ROS2 Components

29. **ROS2 Components: Introducción**
    - Visión general de ROS2 Components y su papel en el desarrollo de software.

30. **Composición manual con C++**
    - Creación manual de composiciones usando C++.

31. **Creación de ROS2 components (plugins): Pasos a seguir**
    - Pasos detallados para crear y usar componentes ROS2.

32. **Cargar un componente en tiempo de ejecución con el comando ros2 component**
    - Instrucciones para cargar componentes en tiempo de ejecución mediante comandos.

33. **Cargar componentes desde un launch file**
    - Ejemplos de cómo cargar componentes desde un launch file.