/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#include "MobilityReason.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_MobilityReason_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MobilityReason_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  8 }	/* (0..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_MobilityReason_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	8,	"accepted" },
	{ 2,	15,	"safetyViolation" },
	{ 3,	16,	"insufficientTime" },
	{ 4,	12,	"planConflict" },
	{ 5,	16,	"otherwiseEngaged" },
	{ 6,	19,	"insufficientUrgency" },
	{ 7,	11,	"planUnclear" },
	{ 8,	5,	"other" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_MobilityReason_enum2value_1[] = {
	1,	/* accepted(1) */
	3,	/* insufficientTime(3) */
	6,	/* insufficientUrgency(6) */
	8,	/* other(8) */
	5,	/* otherwiseEngaged(5) */
	4,	/* planConflict(4) */
	7,	/* planUnclear(7) */
	2,	/* safetyViolation(2) */
	0	/* unknown(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_MobilityReason_specs_1 = {
	asn_MAP_MobilityReason_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MobilityReason_enum2value_1,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	10,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_MobilityReason_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MobilityReason = {
	"MobilityReason",
	"MobilityReason",
	&asn_OP_NativeEnumerated,
	asn_DEF_MobilityReason_tags_1,
	sizeof(asn_DEF_MobilityReason_tags_1)
		/sizeof(asn_DEF_MobilityReason_tags_1[0]), /* 1 */
	asn_DEF_MobilityReason_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityReason_tags_1)
		/sizeof(asn_DEF_MobilityReason_tags_1[0]), /* 1 */
	{ &asn_OER_type_MobilityReason_constr_1, &asn_PER_type_MobilityReason_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MobilityReason_specs_1	/* Additional specs */
};

