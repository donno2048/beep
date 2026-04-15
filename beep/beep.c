#ifndef BEEP
#define BEEP
#ifdef __cplusplus
extern "C" {
#endif
#include "Python.h"
#include "Windows.h"
PyObject *beep(PyObject *self, PyObject *const *args, Py_ssize_t elements) {
    if (elements != 2) {
        PyErr_SetString(PyExc_TypeError, "beep() takes exactly two arguments");
        return NULL;
    }
    if (!PyLong_Check(args[0]) || !PyLong_Check(args[1])) {
        PyErr_SetString(PyExc_TypeError, "The arguments to beep must be integers");
        return NULL;
    }
    Beep(PyLong_AsLong(args[0]), PyLong_AsLong(args[1]));
    Py_RETURN_NONE;
}
static PyMethodDef methods[] = {
    {"beep", beep, METH_FASTCALL, "Beep"},
    {NULL, NULL, 0, NULL}
};
static struct PyModuleDef beep_module = {PyModuleDef_HEAD_INIT, "beep", NULL, -1, methods};
PyMODINIT_FUNC PyInit_beep(void) {return PyModule_Create(&beep_module);}
#ifdef __cplusplus
}
#endif
#endif
