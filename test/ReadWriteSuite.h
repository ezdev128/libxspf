/*
 * libxspf - XSPF playlist handling library
 *
 * Copyright (C) 2006-2008, Sebastian Pipping / Xiph.Org Foundation
 * All rights reserved.
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
 *
 * Sebastian Pipping, sping@xiph.org
 */

#ifndef XSPF_TEST_READ_WRITE_SUITE_H
#define XSPF_TEST_READ_WRITE_SUITE_H 1


#include <cpptest.h>


class ReadWriteSuite : public Test::Suite {

public:
	ReadWriteSuite();

private:
	void testRelativeUris();
	void testXmlBaseStack();

};


#endif // XSPF_TEST_READ_WRITE_SUITE_H
