# runTimeSelection
A simple version of OpenFOAM's runtime selection framework which I developed for my understanding.

This is a framework which eliminates the need to include the (multiple) derived types in the main application for creating them. Instead, only the base type is included and the derived types are implicitly constructed and loaded at startup and the main application passes just a string to create the desired derived type.
