/* SPDX-FileCopyrightText: 2023 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#pragma once

#include "BPy_ChainingIterator.h"

#include "../../stroke/ChainingIterators.h"

///////////////////////////////////////////////////////////////////////////////////////////

extern PyTypeObject ChainPredicateIterator_Type;

#define BPy_ChainPredicateIterator_Check(v) \
  (PyObject_IsInstance((PyObject *)v, (PyObject *)&ChainPredicateIterator_Type))

/*---------------------------Python BPy_ChainPredicateIterator structure definition----------*/
typedef struct {
  BPy_ChainingIterator py_c_it;
  Freestyle::ChainPredicateIterator *cp_it;
  PyObject *upred;
  PyObject *bpred;
} BPy_ChainPredicateIterator;

///////////////////////////////////////////////////////////////////////////////////////////
