/*

	DU12SEM.H

	DB

	Mlaskal's semantic interface for DU1-2

*/

#ifndef __DU12SEM_H
#define __DU12SEM_H

#include <string>
#include "literal_storage.hpp"
#include "flat_icblock.hpp"
#include "dutables.hpp"
#include "abstract_instr.hpp"
#include "gen_ainstr.hpp"

#ifndef _TUPLE
#define _TUPLE
#include <tuple>
#endif

#ifndef _CMATH
#define _CMATH
#include <cmath>
#endif

#ifndef _STRING
#define _STRING
#include <string>
#endif

namespace mlc {

    std::tuple<int, bool>
	try_parse_uint(char *str, std::size_t len);

    double
	try_parse_real(char *str, std::size_t len);

	void
    convert_to_upper(std::string &str);
}

#endif
