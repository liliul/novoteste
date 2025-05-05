using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using crud.Data;
using Microsoft.AspNetCore.Mvc;

namespace crud.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class PersonsController : ControllerBase
    {
        private readonly AppDbContext _appDbContext;

        public PersonsController(AppDbContext appDbContext)
        {
            _appDbContext = appDbContext;
        }
    }
}