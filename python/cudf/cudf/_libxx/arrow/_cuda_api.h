/* Generated by Cython 0.29.16 */

#ifndef __PYX_HAVE_API__cudf___libxx__arrow___cuda
#define __PYX_HAVE_API__cudf___libxx__arrow___cuda
#ifdef __MINGW64__
#define MS_WIN64
#endif
#include "Python.h"
#include "_cuda.h"

static int (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_buffer)(PyObject *) = 0;
#define pyarrow_is_buffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_buffer
static int (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudabuffer)(PyObject *) = 0;
#define pyarrow_is_cudabuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudabuffer
static PyObject *(*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer_base)(std::shared_ptr< arrow::cuda::CudaBuffer>  const &, PyObject *) = 0;
#define pyarrow_wrap_cudabuffer_base __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer_base
static PyObject *(*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer)(std::shared_ptr< arrow::cuda::CudaBuffer>  const &) = 0;
#define pyarrow_wrap_cudabuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer
static std::shared_ptr< arrow::cuda::CudaBuffer>  (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudabuffer)(PyObject *) = 0;
#define pyarrow_unwrap_cudabuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudabuffer
static int (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudahostbuffer)(PyObject *) = 0;
#define pyarrow_is_cudahostbuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudahostbuffer
static PyObject *(*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudahostbuffer)(std::shared_ptr< arrow::cuda::CudaHostBuffer>  const &) = 0;
#define pyarrow_wrap_cudahostbuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudahostbuffer
static std::shared_ptr< arrow::cuda::CudaHostBuffer>  (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudahostbuffer)(PyObject *) = 0;
#define pyarrow_unwrap_cudahostbuffer __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudahostbuffer
static int (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudacontext)(PyObject *) = 0;
#define pyarrow_is_cudacontext __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudacontext
static PyObject *(*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudacontext)(std::shared_ptr< arrow::cuda::CudaContext>  const &) = 0;
#define pyarrow_wrap_cudacontext __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudacontext
static std::shared_ptr< arrow::cuda::CudaContext>  (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudacontext)(PyObject *) = 0;
#define pyarrow_unwrap_cudacontext __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudacontext
static int (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudaipcmemhandle)(PyObject *) = 0;
#define pyarrow_is_cudaipcmemhandle __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudaipcmemhandle
static PyObject *(*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudaipcmemhandle)(std::shared_ptr< arrow::cuda::CudaIpcMemHandle>  &) = 0;
#define pyarrow_wrap_cudaipcmemhandle __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudaipcmemhandle
static std::shared_ptr< arrow::cuda::CudaIpcMemHandle>  (*__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudaipcmemhandle)(PyObject *) = 0;
#define pyarrow_unwrap_cudaipcmemhandle __pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudaipcmemhandle
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        PyErr_Format(PyExc_ImportError,
            "%.200s does not export expected C function %.200s",
                PyModule_GetName(module), funcname);
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000
    if (!PyCapsule_IsValid(cobj, sig)) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, desc);
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif


static int import_cudf___libxx__arrow___cuda(void) {
  PyObject *module = 0;
  module = PyImport_ImportModule("cudf._libxx.arrow._cuda");
  if (!module) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_is_buffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_buffer, "int (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_is_cudabuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudabuffer, "int (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_wrap_cudabuffer_base", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer_base, "PyObject *(std::shared_ptr< arrow::cuda::CudaBuffer>  const &, PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_wrap_cudabuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudabuffer, "PyObject *(std::shared_ptr< arrow::cuda::CudaBuffer>  const &)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_unwrap_cudabuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudabuffer, "std::shared_ptr< arrow::cuda::CudaBuffer>  (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_is_cudahostbuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudahostbuffer, "int (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_wrap_cudahostbuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudahostbuffer, "PyObject *(std::shared_ptr< arrow::cuda::CudaHostBuffer>  const &)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_unwrap_cudahostbuffer", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudahostbuffer, "std::shared_ptr< arrow::cuda::CudaHostBuffer>  (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_is_cudacontext", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudacontext, "int (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_wrap_cudacontext", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudacontext, "PyObject *(std::shared_ptr< arrow::cuda::CudaContext>  const &)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_unwrap_cudacontext", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudacontext, "std::shared_ptr< arrow::cuda::CudaContext>  (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_is_cudaipcmemhandle", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_is_cudaipcmemhandle, "int (PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_wrap_cudaipcmemhandle", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_wrap_cudaipcmemhandle, "PyObject *(std::shared_ptr< arrow::cuda::CudaIpcMemHandle>  &)") < 0) goto bad;
  if (__Pyx_ImportFunction(module, "pyarrow_unwrap_cudaipcmemhandle", (void (**)(void))&__pyx_api_f_4cudf_6_libxx_5arrow_5_cuda_pyarrow_unwrap_cudaipcmemhandle, "std::shared_ptr< arrow::cuda::CudaIpcMemHandle>  (PyObject *)") < 0) goto bad;
  Py_DECREF(module); module = 0;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__cudf___libxx__arrow___cuda */
