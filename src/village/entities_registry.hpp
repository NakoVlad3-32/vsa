#pragma once

#include <map>
#include <string>

namespace vsa::village {

class EntitiesRegistry
{
public:
    static EntitiesRegistry& get_instance();

private:
    EntitiesRegistry();

public:
    void register_resident(const std::string& id, const std::string& name);
    const std::map<std::string, std::string>& get_residents() const;
    void register_item(const std::string& id, const std::string& name);
    const std::map<std::string, std::string>& get_item() const;

private:
    std::map<std::string, std::string> m_residents;
    std::map<std::string, std::string> m_items;
};

template<typename T>
class ResidentRegistrator
{
public:
    ResidentRegistrator()
    {
        auto& r = EntitiesRegistry::get_instance();
        r.register_resident(T::get_id(), T::get_name());
    }
};

template<typename T>
class ItemRegistrator
{
public:
    ItemRegistrator()
    {
        auto& i = EntitiesRegistry::get_instance();
        i.register_item(T::get_id(), T::get_name());
    }
};

} // vsa