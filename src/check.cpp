#include <eosio/system.hpp>
#include <check.hpp>

// Test CRYPTO_PRIMITIVES
[[eosio::action]]
void check_features::cryptoprim(eosio::checksum256 hash) {

	// just assert the hash against the string "hash"
	eosio::assert_sha256("hash", 5, hash);
}

// Test GET_BLOCK_NUM
[[eosio::action]]
eosio::block_num_t check_features::blocknum() {
	return eosio::current_block_number();
}

// Test GET_CODE_HASH
[[eosio::action]]
void check_features::codehash() {
	// TODO
}

// Test ACTION_RETURN_VALUE
[[eosio::action]]
std::string check_features::retval() {
	std::string s = "Hello world";
	return s; // the `set_action_return_value` intrinsic is invoked automatically here
}