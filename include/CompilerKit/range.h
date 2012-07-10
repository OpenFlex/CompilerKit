/**
 * Copyright (C) 2012 The CompilerKit contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef INCLUDE_CompilerKit_range_h__
#define INCLUDE_CompilerKit_range_h__

#include <glib-object.h>
G_BEGIN_DECLS
#define COMPILERKIT_TYPE_RANGE (compilerkit_range_get_type ())
#define COMPILERKIT_RANGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), COMPILERKIT_TYPE_RANGE))
#define COMPILERKIT_IS_RANGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), COMPILERKIT_TYPE_RANGE))
#define COMPILERKIT_RANGE_CLASS(klass) (G_CHECK_CLASS_CAST ((klass), COMPILERKIT_TYPE_RANGE, ComplierKitRangeClass))
#define COMPILERKIT_IS_RANGE_CLASS(klass) (G_CHECK_CLASS_TYPE ((klass), COMPILERKIT_TYPE_RANGE))
#define COMPILERKIT_RANGE_GET_CLASS(obj)(G_TYPE_INSTANCE_GET_CLASS ((obj), COMPILERKIT_TYPE_RANGE, ComplierKitRangeClass))

typedef struct _CompilerKitRangePrivate CompilerKitRange Private;

typedef struct _CompilerKitRange
{
	
	/** Base Instance (GObject) */
	GObject parent_instance;
	
	/** Opaque pointer to private fields */
	CompilerKitRangePrivate *priv;
} CompilerKitRange


GType compilerkit_range_get_type (void);

GObject *compilerkit_range_new (CompilerKitSymbol *start, CompilerKitSymbol *end);
