/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#include "TrailerUnitDescription.h"

asn_TYPE_member_t asn_MBR_TrailerUnitDescription_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerUnitDescription, isDolly),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IsDolly,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"isDolly"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerUnitDescription, width),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleWidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"width"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerUnitDescription, length),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"length"
		},
	{ ATF_POINTER, 4, offsetof(struct TrailerUnitDescription, height),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"height"
		},
	{ ATF_POINTER, 3, offsetof(struct TrailerUnitDescription, mass),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerMass,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mass"
		},
	{ ATF_POINTER, 2, offsetof(struct TrailerUnitDescription, bumperHeights),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BumperHeights,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bumperHeights"
		},
	{ ATF_POINTER, 1, offsetof(struct TrailerUnitDescription, centerOfGravity),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeight,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"centerOfGravity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerUnitDescription, frontPivot),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PivotPointDescription,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frontPivot"
		},
	{ ATF_POINTER, 2, offsetof(struct TrailerUnitDescription, rearPivot),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PivotPointDescription,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rearPivot"
		},
	{ ATF_POINTER, 1, offsetof(struct TrailerUnitDescription, rearWheelOffset),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rearWheelOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrailerUnitDescription, positionOffset),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Node_XY_24b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"positionOffset"
		},
	{ ATF_POINTER, 2, offsetof(struct TrailerUnitDescription, elevationOffset),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VertOffset_B07,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevationOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct TrailerUnitDescription, crumbData),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrailerHistoryPointList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crumbData"
		},
};
static const int asn_MAP_TrailerUnitDescription_oms_1[] = { 3, 4, 5, 6, 8, 9, 11, 12 };
static const ber_tlv_tag_t asn_DEF_TrailerUnitDescription_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrailerUnitDescription_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* isDolly */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* width */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* length */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* height */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mass */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bumperHeights */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* centerOfGravity */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* frontPivot */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* rearPivot */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rearWheelOffset */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* positionOffset */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* elevationOffset */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* crumbData */
};
asn_SEQUENCE_specifics_t asn_SPC_TrailerUnitDescription_specs_1 = {
	sizeof(struct TrailerUnitDescription),
	offsetof(struct TrailerUnitDescription, _asn_ctx),
	asn_MAP_TrailerUnitDescription_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_TrailerUnitDescription_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrailerUnitDescription = {
	"TrailerUnitDescription",
	"TrailerUnitDescription",
	&asn_OP_SEQUENCE,
	asn_DEF_TrailerUnitDescription_tags_1,
	sizeof(asn_DEF_TrailerUnitDescription_tags_1)
		/sizeof(asn_DEF_TrailerUnitDescription_tags_1[0]), /* 1 */
	asn_DEF_TrailerUnitDescription_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrailerUnitDescription_tags_1)
		/sizeof(asn_DEF_TrailerUnitDescription_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrailerUnitDescription_1,
	13,	/* Elements count */
	&asn_SPC_TrailerUnitDescription_specs_1	/* Additional specs */
};

