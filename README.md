# Univalle
## Tecnología en Desarrollo de Software
### Fundamentos de Programación Orientada a Objetos

### Taller 3 - Programación Orientada a Objetos en C++

Este repositorio contiene el ejercicio **Sistema de Gestión de una Biblioteca**,
desarrollado en el archivo:

```sh
index.cpp
```

## Compilación y Ejecución
Para compilar el programa y generar el ejecutable de la biblioteca, se debe ejecutar el siguiente comando en la terminal:

```sh
g++ index.cpp -o library
```

Luego, para ejecutar el programa, se usa:

```sh
./library
```

## Uso del programa
El programa permite gestionar una biblioteca con diversas opciones. Para utilizar correctamente la opción **6 (Exportar datos a CSV)**, primero es necesario agregar libros a la biblioteca utilizando las opciones disponibles en el sistema.

### Subida de archivos CSV personalizados
Si el usuario desea cargar su propio archivo CSV con libros predefinidos, debe asegurarse de que el archivo se llame **data.csv** y almacenarlo en el directorio raíz del proyecto.

El formato esperado para el archivo CSV es el siguiente:

```csv
id,title,author,category,available,userID
23432,Soledad,jhonatan,romance,1,0
34212,Sombras,margarita,suspenso,1,0
56543,Outliers,anthonny,politic,1,0
```

**Importante:**
- Asegúrar se de que el archivo CSV esté correctamente formateado.
- La primera línea debe contener los nombres de las columnas.
- Los datos deben estar separados por comas (,).

## Elaborado por:
- **Cristian Camilo Cortes Ortiz** - 202478542


