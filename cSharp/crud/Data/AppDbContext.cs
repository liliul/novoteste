using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using crud.Models;
using Microsoft.EntityFrameworkCore;

namespace crud.Data
{
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions options) : base(options) { }

        public DbSet<Person> DB { get; set; }
    }
}