#include <eosio/eosio.hpp>
#include <eosio/crypto.hpp>
using namespace eosio;

class [[eosio::contract]] check_features : public contract {
public:
	using contract::contract;

	[[eosio::action]]
	void cryptoprim(eosio::checksum256 hash);

	[[eosio::action]]
	void blocknum();

	[[eosio::action]]
	void codehash();

	[[eosio::action]]
	std::string retval();


	using cryptoprim_action = action_wrapper<"cryptoprim"_n, &check_features::cryptoprim>;
	using blocknum_action = action_wrapper<"blocknum"_n, &check_features::blocknum>;
	using codehash_action = action_wrapper<"codehash"_n, &check_features::codehash>;
	using checkret_action = action_wrapper<"checkret"_n, &check_features::retval>;
};