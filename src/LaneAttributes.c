/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#include "LaneAttributes.h"

asn_TYPE_member_t asn_MBR_LaneAttributes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, directionalUse),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneDirection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"directionalUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, sharedWith),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneSharing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sharedWith"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneAttributes, laneType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LaneTypeAttributes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"laneType"
		},
	{ ATF_POINTER, 1, offsetof(struct LaneAttributes, regional),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegionalExtension_136P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_LaneAttributes_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LaneAttributes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LaneAttributes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* directionalUse */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sharedWith */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laneType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_specs_1 = {
	sizeof(struct LaneAttributes),
	offsetof(struct LaneAttributes, _asn_ctx),
	asn_MAP_LaneAttributes_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LaneAttributes_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LaneAttributes = {
	"LaneAttributes",
	"LaneAttributes",
	&asn_OP_SEQUENCE,
	asn_DEF_LaneAttributes_tags_1,
	sizeof(asn_DEF_LaneAttributes_tags_1)
		/sizeof(asn_DEF_LaneAttributes_tags_1[0]), /* 1 */
	asn_DEF_LaneAttributes_tags_1,	/* Same as above */
	sizeof(asn_DEF_LaneAttributes_tags_1)
		/sizeof(asn_DEF_LaneAttributes_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LaneAttributes_1,
	4,	/* Elements count */
	&asn_SPC_LaneAttributes_specs_1	/* Additional specs */
};

