#include <village/entities_registry.hpp>

#include <village/residents/resident_baker.hpp>
#include <village/residents/resident_blacksmith.hpp>
#include <village/residents/resident_miner.hpp>
#include <village/tools/tool_sickle.hpp>
#include <village/tools/tool_triphammer.hpp>

namespace vsa::village {

const static ResidentRegistrator<ResidentBaker> r_rb;
const static ResidentRegistrator<ResidentMiner> r_rm;
const static ResidentRegistrator<ResidentBlacksmith> r_rbs;
const static ItemRegistrator<ToolSickle> i_ts;
const static ItemRegistrator<ToolTriphammer> i_tth;
}