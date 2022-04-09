#include <ciao/ciao_gluecode.h>

void lcd1602Control(ciao_term, ciao_term, ciao_term, ciao_term);
bool_t gluecode_lcd1602Control(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602Control", 4);
  ciao_term t0;
  ciao_term t1;
  ciao_term t2;
  ciao_term t3;
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  t0 = ciao_ref(ctx, X(0));
  t1 = ciao_ref(ctx, X(1));
  t2 = ciao_ref(ctx, X(2));
  t3 = ciao_ref(ctx, X(3));
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602Control(t0, t1, t2, t3));
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602Init(ciao_term, ciao_term, ciao_term);
bool_t gluecode_lcd1602Init(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602Init", 3);
  ciao_term t0;
  ciao_term t1;
  ciao_term t2;
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  t0 = ciao_ref(ctx, X(0));
  t1 = ciao_ref(ctx, X(1));
  t2 = ciao_ref(ctx, X(2));
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602Init(t0, t1, t2));
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602Shutdown(void);
bool_t gluecode_lcd1602Shutdown(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602Shutdown", 0);
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602Shutdown());
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602SetCursor(ciao_term, ciao_term, ciao_term);
bool_t gluecode_lcd1602SetCursor(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602SetCursor", 3);
  ciao_term t0;
  ciao_term t1;
  ciao_term t2;
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  t0 = ciao_ref(ctx, X(0));
  t1 = ciao_ref(ctx, X(1));
  t2 = ciao_ref(ctx, X(2));
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602SetCursor(t0, t1, t2));
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602WriteString(ciao_term, ciao_term);
bool_t gluecode_lcd1602WriteString(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602WriteString", 2);
  ciao_term t0;
  ciao_term t1;
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  t0 = ciao_ref(ctx, X(0));
  t1 = ciao_ref(ctx, X(1));
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602WriteString(t0, t1));
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602Clear(ciao_term);
bool_t gluecode_lcd1602Clear(worker_t *w) {
  ERR__FUNCTOR("lcd1602:lcd1602Clear", 1);
  ciao_term t0;
  CiaoDeclCtx(ctx);
  CiaoInitCtx(ctx);
  ciao_frame_begin_s(ctx);
  t0 = ciao_ref(ctx, X(0));
  CiaoSetImplicitCtx(ctx);
  GLUECODE_TRY(lcd1602Clear(t0));
  ciao_frame_end_s(ctx);
  return TRUE;
}

void lcd1602_init(char *module) {
  define_c_mod_predicate(module, "lcd1602Control", 4, gluecode_lcd1602Control);
  define_c_mod_predicate(module, "lcd1602Init", 3, gluecode_lcd1602Init);
  define_c_mod_predicate(module, "lcd1602Shutdown", 0, gluecode_lcd1602Shutdown);
  define_c_mod_predicate(module, "lcd1602SetCursor", 3, gluecode_lcd1602SetCursor);
  define_c_mod_predicate(module, "lcd1602WriteString", 2, gluecode_lcd1602WriteString);
  define_c_mod_predicate(module, "lcd1602Clear", 1, gluecode_lcd1602Clear);
}

void lcd1602_end(char *module) {
  undefine_c_mod_predicate(module, "lcd1602Control", 4);
  undefine_c_mod_predicate(module, "lcd1602Init", 3);
  undefine_c_mod_predicate(module, "lcd1602Shutdown", 0);
  undefine_c_mod_predicate(module, "lcd1602SetCursor", 3);
  undefine_c_mod_predicate(module, "lcd1602WriteString", 2);
  undefine_c_mod_predicate(module, "lcd1602Clear", 1);
}

