/* This C file is generated by NIT to compile module compiling___icode_generator. */
#include "compiling___icode_generator._sep.h"
void compiling___icode_generator___Program___generate_icode_files(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___icode_generator;
  fra.me.line = 26;
  fra.me.meth = LOCATE_compiling___icode_generator___Program___generate_icode_files;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* ./compiling//icode_generator.nit:26 */
  fra.me.REG[1] = fra.me.REG[0];
  /* ./compiling//icode_generator.nit:28 */
  fra.me.REG[2] = CALL_program___Program___tc(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[2] = CALL_compiling___compiling_base___ToolContext___compdir(fra.me.REG[2])(fra.me.REG[2]);
  REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
    nit_abort("Reciever is null", NULL, LOCATE_compiling___icode_generator, 28);
  }
  CALL_standard___file___String___mkdir(fra.me.REG[2])(fra.me.REG[2]);
  CALL_program___Program___with_each_live_local_classes(fra.me.REG[1])(fra.me.REG[1], (&(fra.me)), ((fun_t)OC_compiling___icode_generator___Program___generate_icode_files_1));
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_compiling___icode_generator___Program___generate_icode_files_1(struct stack_frame_t *closctx, val_t p0){
    struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
    val_t REGB0;
    val_t tmp;
    /* ./compiling//icode_generator.nit:30 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_compiling___icode_generator;
    fra.me.line = 30;
    fra.me.meth = LOCATE_compiling___icode_generator___Program___generate_icode_files;
    fra.me.has_broke = 0;
    fra.me.REG_size = 2;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[0] = p0;
    /* ./compiling//icode_generator.nit:31 */
    fra.me.REG[1] = CALL_program___Program___tc(closctx->REG[1])(closctx->REG[1]);
    fra.me.REG[1] = CALL_compiling___compiling_base___ToolContext___compdir(fra.me.REG[1])(fra.me.REG[1]);
    REGB0 = TAG_Bool((fra.me.REG[1]!=NIT_NULL) && VAL_ISA(fra.me.REG[1], COLOR_standard___string___String, ID_standard___string___String)) /*cast String*/;
    if (UNTAG_Bool(REGB0)) {
    } else {
      nit_abort("Cast failed", NULL, LOCATE_compiling___icode_generator, 31);
    }
    CALL_compiling___icode_generator___MMLocalClass___generate_icode_file(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
    stack_frame_head = fra.me.prev;
    return;
  }
void compiling___icode_generator___FileICodeDumper___init(val_t p0, val_t p1, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_compiling___icode_generator___FileICodeDumper].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___icode_generator;
  fra.me.line = 41;
  fra.me.meth = LOCATE_compiling___icode_generator___FileICodeDumper___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./compiling//icode_generator.nit:41 */
  fra.me.REG[2] = fra.me.REG[0];
  /* ./compiling//icode_generator.nit:43 */
  REGB0 = TAG_Bool(false);
  REGB1 = TAG_Bool(false);
  CALL_analysis___icode_dump___ICodeDumper___init(fra.me.REG[0])(fra.me.REG[0], REGB0, REGB1, init_table);
  /* ./compiling//icode_generator.nit:44 */
  ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[2]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
void compiling___icode_generator___FileICodeDumper___write(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t tmp;
      static val_t once_value_1; /* Once value */
  static val_t once_value_3; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___icode_generator;
  fra.me.line = 47;
  fra.me.meth = LOCATE_compiling___icode_generator___FileICodeDumper___write;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./compiling//icode_generator.nit:48 */
  REGB0 = TAG_Int(0);
  REGB1 = CALL_analysis___icode_dump___ICodeDumper___indent_level(fra.me.REG[0])(fra.me.REG[0]);
  /* ./../lib/standard//kernel.nit:335 */
  while(1) {
    REGB2 = TAG_Bool(VAL_ISA(REGB1, VTCOLOR_standard___kernel___Comparable___OTHER(REGB0), VTID_standard___kernel___Comparable___OTHER(REGB0))) /*cast OTHER*/;
    if (UNTAG_Bool(REGB2)) {
    } else {
      nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
    }
    /* ./../lib/standard//kernel.nit:215 */
    REGB2 = TAG_Bool(UNTAG_Int(REGB0)<UNTAG_Int(REGB1));
    /* ./../lib/standard//kernel.nit:335 */
    if (UNTAG_Bool(REGB2)) {
      /* ./compiling//icode_generator.nit:49 */
      REGB2 = TAG_Bool(ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0])!=NIT_NULL);
      if (UNTAG_Bool(REGB2)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_file", LOCATE_compiling___icode_generator, 49);
      }
      fra.me.REG[2] = ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0]);
      if (!once_value_1) {
        fra.me.REG[3] = BOX_NativeString("    ");
        REGB2 = TAG_Int(4);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB2);
        once_value_1 = fra.me.REG[3];
        register_static_object(&once_value_1);
      } else fra.me.REG[3] = once_value_1;
      fra.me.REG[3] = fra.me.REG[3];
      CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      /* ./../lib/standard//kernel.nit:337 */
      REGB2 = TAG_Int(1);
      /* ./../lib/standard//kernel.nit:218 */
      REGB2 = TAG_Int(UNTAG_Int(REGB0)+UNTAG_Int(REGB2));
      /* ./../lib/standard//kernel.nit:337 */
      REGB0 = REGB2;
    } else {
      /* ./../lib/standard//kernel.nit:335 */
      goto label2;
    }
  }
  label2: while(0);
  /* ./compiling//icode_generator.nit:51 */
  REGB0 = TAG_Bool(ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_file", LOCATE_compiling___icode_generator, 51);
  }
  fra.me.REG[3] = ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0]);
  CALL_standard___stream___OStream___write(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
  /* ./compiling//icode_generator.nit:52 */
  REGB0 = TAG_Bool(ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_file", LOCATE_compiling___icode_generator, 52);
  }
  fra.me.REG[0] = ATTR_compiling___icode_generator___FileICodeDumper____file(fra.me.REG[0]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString("\n");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___stream___OStream___write(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
void compiling___icode_generator___MMLocalClass___generate_icode_file(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
      static val_t once_value_4; /* Once value */
      static val_t once_value_5; /* Once value */
      static val_t once_value_6; /* Once value */
      static val_t once_value_7; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___icode_generator;
  fra.me.line = 57;
  fra.me.meth = LOCATE_compiling___icode_generator___MMLocalClass___generate_icode_file;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./compiling//icode_generator.nit:59 */
  REGB0 = TAG_Int(5);
  fra.me.REG[2] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[3] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
    once_value_1 = fra.me.REG[3];
    register_static_object(&once_value_1);
  } else fra.me.REG[3] = once_value_1;
  fra.me.REG[3] = fra.me.REG[3];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[0])(fra.me.REG[0]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".icode");
    REGB0 = TAG_Int(6);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
  fra.me.REG[2] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[2]);
  /* ./compiling//icode_generator.nit:60 */
  fra.me.REG[1] = CALL_primitive_info___MMLocalClass___primitive_info(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  if (UNTAG_Bool(REGB0)) {
    /* ./compiling//icode_generator.nit:62 */
    fra.me.REG[1] = CALL_program___MMLocalClass___init_var_iroutine(fra.me.REG[0])(fra.me.REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* ./compiling//icode_generator.nit:63 */
      fra.me.REG[1] = NEW_FileICodeDumper_compiling___icode_generator___FileICodeDumper___init(fra.me.REG[2]);
      /* ./compiling//icode_generator.nit:64 */
      CALL_analysis___icode_dump___ICodeDumper___indent(fra.me.REG[1])(fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:65 */
      if (!once_value_4) {
        fra.me.REG[3] = BOX_NativeString("Init var iroutine::\n");
        REGB0 = TAG_Int(20);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
        once_value_4 = fra.me.REG[3];
        register_static_object(&once_value_4);
      } else fra.me.REG[3] = once_value_4;
      fra.me.REG[3] = fra.me.REG[3];
      CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      /* ./compiling//icode_generator.nit:66 */
      fra.me.REG[3] = CALL_program___MMLocalClass___init_var_iroutine(fra.me.REG[0])(fra.me.REG[0]);
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_compiling___icode_generator, 66);
      }
      CALL_analysis___icode_dump___IRoutine___dump(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:67 */
      if (!once_value_5) {
        fra.me.REG[1] = BOX_NativeString("\n\n");
        REGB0 = TAG_Int(2);
        fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
        once_value_5 = fra.me.REG[1];
        register_static_object(&once_value_5);
      } else fra.me.REG[1] = once_value_5;
      fra.me.REG[1] = fra.me.REG[1];
      CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
    }
    /* ./compiling//icode_generator.nit:69 */
    fra.me.REG[1] = CALL_program___MMLocalClass___checknew_iroutine(fra.me.REG[0])(fra.me.REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* ./compiling//icode_generator.nit:70 */
      fra.me.REG[1] = NEW_FileICodeDumper_compiling___icode_generator___FileICodeDumper___init(fra.me.REG[2]);
      /* ./compiling//icode_generator.nit:71 */
      CALL_analysis___icode_dump___ICodeDumper___indent(fra.me.REG[1])(fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:72 */
      if (!once_value_6) {
        fra.me.REG[3] = BOX_NativeString("Check new instance iroutine::\n");
        REGB0 = TAG_Int(30);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
        once_value_6 = fra.me.REG[3];
        register_static_object(&once_value_6);
      } else fra.me.REG[3] = once_value_6;
      fra.me.REG[3] = fra.me.REG[3];
      CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      /* ./compiling//icode_generator.nit:73 */
      fra.me.REG[3] = CALL_program___MMLocalClass___checknew_iroutine(fra.me.REG[0])(fra.me.REG[0]);
      REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_compiling___icode_generator, 73);
      }
      CALL_analysis___icode_dump___IRoutine___dump(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:74 */
      if (!once_value_7) {
        fra.me.REG[1] = BOX_NativeString("\n\n");
        REGB0 = TAG_Int(2);
        fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
        once_value_7 = fra.me.REG[1];
        register_static_object(&once_value_7);
      } else fra.me.REG[1] = once_value_7;
      fra.me.REG[1] = fra.me.REG[1];
      CALL_standard___stream___OStream___write(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
    }
    /* ./compiling//icode_generator.nit:78 */
    fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMLocalClass___global_properties(fra.me.REG[0])(fra.me.REG[0]);
    CALL_standard___collection___abstract_collection___Collection___iterate(fra.me.REG[1])(fra.me.REG[1], (&(fra.me)), ((fun_t)OC_compiling___icode_generator___MMLocalClass___generate_icode_file_8));
  }
  /* ./compiling//icode_generator.nit:91 */
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMLocalClass___global_properties(fra.me.REG[0])(fra.me.REG[0]);
  CALL_standard___collection___abstract_collection___Collection___iterate(fra.me.REG[1])(fra.me.REG[1], (&(fra.me)), ((fun_t)OC_compiling___icode_generator___MMLocalClass___generate_icode_file_13));
  /* ./compiling//icode_generator.nit:97 */
  CALL_standard___stream___IOS___close(fra.me.REG[2])(fra.me.REG[2]);
  stack_frame_head = fra.me.prev;
  return;
}
    void OC_compiling___icode_generator___MMLocalClass___generate_icode_file_8(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0){
      struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
      val_t REGB0;
      fun_t CREG[1];
      val_t tmp;
      static val_t once_value_10; /* Once value */
      static val_t once_value_11; /* Once value */
      static val_t once_value_12; /* Once value */
      fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
      fra.me.file = LOCATE_compiling___icode_generator;
      fra.me.line = 0;
      fra.me.meth = LOCATE_compiling___icode_generator___MMLocalClass___generate_icode_file;
      fra.me.has_broke = 0;
      fra.me.REG_size = 4;
      fra.me.REG[0] = NIT_NULL;
      fra.me.REG[1] = NIT_NULL;
      fra.me.REG[2] = NIT_NULL;
      fra.me.REG[3] = NIT_NULL;
      fra.me.closure_ctx = closctx_param;
      fra.me.closure_funs = CREG;
      fra.me.REG[0] = p0;
      CREG[0] = clos_fun0;
      /* ./compiling//icode_generator.nit:79 */
      REGB0 = CALL_metamodel___abstractmetamodel___MMGlobalProperty___is_init_for(fra.me.REG[0])(fra.me.REG[0], closctx->REG[0]);
      REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
      if (UNTAG_Bool(REGB0)) {
        goto label9;
      }
      /* ./compiling//icode_generator.nit:80 */
      fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalClass_____bra(closctx->REG[0])(closctx->REG[0], fra.me.REG[0]);
      /* ./compiling//icode_generator.nit:81 */
      REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[0], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Assert failed", NULL, LOCATE_compiling___icode_generator, 81);
      }
      /* ./compiling//icode_generator.nit:82 */
      fra.me.REG[1] = NEW_FileICodeDumper_compiling___icode_generator___FileICodeDumper___init(closctx->REG[2]);
      /* ./compiling//icode_generator.nit:83 */
      CALL_analysis___icode_dump___ICodeDumper___indent(fra.me.REG[1])(fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:84 */
      REGB0 = TAG_Int(3);
      fra.me.REG[2] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
      if (!once_value_10) {
        fra.me.REG[3] = BOX_NativeString("New instance:: ");
        REGB0 = TAG_Int(15);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
        once_value_10 = fra.me.REG[3];
        register_static_object(&once_value_10);
      } else fra.me.REG[3] = once_value_10;
      fra.me.REG[3] = fra.me.REG[3];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      fra.me.REG[3] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      if (!once_value_11) {
        fra.me.REG[3] = BOX_NativeString("\n");
        REGB0 = TAG_Int(1);
        fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
        once_value_11 = fra.me.REG[3];
        register_static_object(&once_value_11);
      } else fra.me.REG[3] = once_value_11;
      fra.me.REG[3] = fra.me.REG[3];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
      fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
      CALL_standard___stream___OStream___write(closctx->REG[2])(closctx->REG[2], fra.me.REG[2]);
      /* ./compiling//icode_generator.nit:85 */
      fra.me.REG[2] = CALL_program___MMLocalClass___new_instance_iroutine(closctx->REG[0])(closctx->REG[0]);
      fra.me.REG[0] = CALL_standard___collection___abstract_collection___MapRead_____bra(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[0]);
      REGB0 = TAG_Bool(fra.me.REG[0]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_compiling___icode_generator, 85);
      }
      CALL_analysis___icode_dump___IRoutine___dump(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
      /* ./compiling//icode_generator.nit:86 */
      if (!once_value_12) {
        fra.me.REG[1] = BOX_NativeString("\n\n");
        REGB0 = TAG_Int(2);
        fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
        once_value_12 = fra.me.REG[1];
        register_static_object(&once_value_12);
      } else fra.me.REG[1] = once_value_12;
      fra.me.REG[1] = fra.me.REG[1];
      CALL_standard___stream___OStream___write(closctx->REG[2])(closctx->REG[2], fra.me.REG[1]);
      label9: while(0);
      stack_frame_head = fra.me.prev;
      return;
    }
  void OC_compiling___icode_generator___MMLocalClass___generate_icode_file_13(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0){
    struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
    val_t REGB0;
    val_t REGB1;
    fun_t CREG[1];
    val_t tmp;
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_compiling___icode_generator;
    fra.me.line = 0;
    fra.me.meth = LOCATE_compiling___icode_generator___MMLocalClass___generate_icode_file;
    fra.me.has_broke = 0;
    fra.me.REG_size = 2;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.closure_ctx = closctx_param;
    fra.me.closure_funs = CREG;
    fra.me.REG[0] = p0;
    CREG[0] = clos_fun0;
    /* ./compiling//icode_generator.nit:92 */
    fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalClass_____bra(closctx->REG[0])(closctx->REG[0], fra.me.REG[0]);
    /* ./compiling//icode_generator.nit:93 */
    fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMLocalProperty___local_class(fra.me.REG[0])(fra.me.REG[0]);
    REGB0 = TAG_Bool(IS_EQUAL_OO(fra.me.REG[1],closctx->REG[0]));
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], closctx->REG[0]);
      REGB0 = REGB1;
    }
    if (UNTAG_Bool(REGB0)) {
      REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[0], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
    } else {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    }
    if (UNTAG_Bool(REGB0)) {
      /* ./compiling//icode_generator.nit:94 */
      CALL_compiling___icode_generator___MMMethod___generate_icode(fra.me.REG[0])(fra.me.REG[0], closctx->REG[2]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
void compiling___icode_generator___MMMethod___generate_icode(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[4];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___icode_generator;
  fra.me.line = 102;
  fra.me.meth = LOCATE_compiling___icode_generator___MMMethod___generate_icode;
  fra.me.has_broke = 0;
  fra.me.REG_size = 5;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* ./compiling//icode_generator.nit:104 */
  fra.me.REG[2] = NEW_FileICodeDumper_compiling___icode_generator___FileICodeDumper___init(fra.me.REG[1]);
  /* ./compiling//icode_generator.nit:105 */
  CALL_analysis___icode_dump___ICodeDumper___indent(fra.me.REG[2])(fra.me.REG[2]);
  /* ./compiling//icode_generator.nit:106 */
  REGB0 = TAG_Int(3);
  fra.me.REG[3] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[4] = BOX_NativeString("Method:: ");
    REGB0 = TAG_Int(9);
    fra.me.REG[4] = NEW_String_standard___string___String___with_native(fra.me.REG[4], REGB0);
    once_value_1 = fra.me.REG[4];
    register_static_object(&once_value_1);
  } else fra.me.REG[4] = once_value_1;
  fra.me.REG[4] = fra.me.REG[4];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
  fra.me.REG[4] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
  if (!once_value_2) {
    fra.me.REG[4] = BOX_NativeString("\n");
    REGB0 = TAG_Int(1);
    fra.me.REG[4] = NEW_String_standard___string___String___with_native(fra.me.REG[4], REGB0);
    once_value_2 = fra.me.REG[4];
    register_static_object(&once_value_2);
  } else fra.me.REG[4] = once_value_2;
  fra.me.REG[4] = fra.me.REG[4];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
  fra.me.REG[3] = CALL_standard___string___Object___to_s(fra.me.REG[3])(fra.me.REG[3]);
  CALL_standard___stream___OStream___write(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[3]);
  /* ./compiling//icode_generator.nit:107 */
  fra.me.REG[0] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = TAG_Bool(fra.me.REG[0]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
    nit_abort("Reciever is null", NULL, LOCATE_compiling___icode_generator, 107);
  }
  CALL_analysis___icode_dump___IRoutine___dump(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[2]);
  /* ./compiling//icode_generator.nit:108 */
  if (!once_value_3) {
    fra.me.REG[2] = BOX_NativeString("\n\n");
    REGB0 = TAG_Int(2);
    fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
    once_value_3 = fra.me.REG[2];
    register_static_object(&once_value_3);
  } else fra.me.REG[2] = once_value_3;
  fra.me.REG[2] = fra.me.REG[2];
  CALL_standard___stream___OStream___write(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
  stack_frame_head = fra.me.prev;
  return;
}