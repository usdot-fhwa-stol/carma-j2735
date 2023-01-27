/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "carma_complete_j2735.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#include "ComputedLane.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_offsetXaxis_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_offsetXaxis_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_offsetYaxis_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_offsetYaxis_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_regional_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_offsetXaxis_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane__offsetXaxis, choice.small),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivenLineOffsetSm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"small"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane__offsetXaxis, choice.large),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivenLineOffsetLg,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"large"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_offsetXaxis_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* small */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* large */
};
static asn_CHOICE_specifics_t asn_SPC_offsetXaxis_specs_3 = {
	sizeof(struct ComputedLane__offsetXaxis),
	offsetof(struct ComputedLane__offsetXaxis, _asn_ctx),
	offsetof(struct ComputedLane__offsetXaxis, present),
	sizeof(((struct ComputedLane__offsetXaxis *)0)->present),
	asn_MAP_offsetXaxis_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_offsetXaxis_3 = {
	"offsetXaxis",
	"offsetXaxis",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_offsetXaxis_constr_3, &asn_PER_type_offsetXaxis_constr_3, CHOICE_constraint },
	asn_MBR_offsetXaxis_3,
	2,	/* Elements count */
	&asn_SPC_offsetXaxis_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_offsetYaxis_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane__offsetYaxis, choice.small),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivenLineOffsetSm,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"small"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane__offsetYaxis, choice.large),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivenLineOffsetLg,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"large"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_offsetYaxis_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* small */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* large */
};
static asn_CHOICE_specifics_t asn_SPC_offsetYaxis_specs_6 = {
	sizeof(struct ComputedLane__offsetYaxis),
	offsetof(struct ComputedLane__offsetYaxis, _asn_ctx),
	offsetof(struct ComputedLane__offsetYaxis, present),
	sizeof(((struct ComputedLane__offsetYaxis *)0)->present),
	asn_MAP_offsetYaxis_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_offsetYaxis_6 = {
	"offsetYaxis",
	"offsetYaxis",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_offsetYaxis_constr_6, &asn_PER_type_offsetYaxis_constr_6, CHOICE_constraint },
	asn_MBR_offsetYaxis_6,
	2,	/* Elements count */
	&asn_SPC_offsetYaxis_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_regional_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_136P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_12 = {
	sizeof(struct ComputedLane__regional),
	offsetof(struct ComputedLane__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_12 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_12,
	sizeof(asn_DEF_regional_tags_12)
		/sizeof(asn_DEF_regional_tags_12[0]) - 1, /* 1 */
	asn_DEF_regional_tags_12,	/* Same as above */
	sizeof(asn_DEF_regional_tags_12)
		/sizeof(asn_DEF_regional_tags_12[0]), /* 2 */
	{ &asn_OER_type_regional_constr_12, &asn_PER_type_regional_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_regional_12,
	1,	/* Single element */
	&asn_SPC_regional_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ComputedLane_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane, referenceLaneId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"referenceLaneId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane, offsetXaxis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_offsetXaxis_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offsetXaxis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ComputedLane, offsetYaxis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_offsetYaxis_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"offsetYaxis"
		},
	{ ATF_POINTER, 4, offsetof(struct ComputedLane, rotateXY),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_Angle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rotateXY"
		},
	{ ATF_POINTER, 3, offsetof(struct ComputedLane, scaleXaxis),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Scale_B12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scaleXaxis"
		},
	{ ATF_POINTER, 2, offsetof(struct ComputedLane, scaleYaxis),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Scale_B12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scaleYaxis"
		},
	{ ATF_POINTER, 1, offsetof(struct ComputedLane, regional),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_regional_12,
		0,
		{ &asn_OER_memb_regional_constr_12, &asn_PER_memb_regional_constr_12,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_ComputedLane_oms_1[] = { 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_ComputedLane_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ComputedLane_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* referenceLaneId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offsetXaxis */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* offsetYaxis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rotateXY */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* scaleXaxis */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* scaleYaxis */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_ComputedLane_specs_1 = {
	sizeof(struct ComputedLane),
	offsetof(struct ComputedLane, _asn_ctx),
	asn_MAP_ComputedLane_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_ComputedLane_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ComputedLane = {
	"ComputedLane",
	"ComputedLane",
	&asn_OP_SEQUENCE,
	asn_DEF_ComputedLane_tags_1,
	sizeof(asn_DEF_ComputedLane_tags_1)
		/sizeof(asn_DEF_ComputedLane_tags_1[0]), /* 1 */
	asn_DEF_ComputedLane_tags_1,	/* Same as above */
	sizeof(asn_DEF_ComputedLane_tags_1)
		/sizeof(asn_DEF_ComputedLane_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ComputedLane_1,
	7,	/* Elements count */
	&asn_SPC_ComputedLane_specs_1	/* Additional specs */
};

