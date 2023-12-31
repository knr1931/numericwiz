/*
 * File: marraymodule.cpp
 * Author: K Nitesh Reddy
 * Description: This is main Extension module for arrays that represents vectors, matrix in linear algebra
 * Copyright (c) 2023, K Nitesh Reddy
 */

#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include <numpy/arrayobject.h>

static PyObject *
foo(PyObject *self)
{
    return PyUnicode_FromString("Hello World! from numericwiz Multi Dim Array Module");
}

static PyMethodDef methods[] = {
    {"foo", (PyCFunction)foo, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "matrix",
    NULL,
    -1,
    methods,
};

PyMODINIT_FUNC PyInit_matrix(void)
{
    return PyModule_Create(&module);
}